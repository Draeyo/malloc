#include "malloc.h"
#include <stdio.h>

static t_info	*search_free_space(t_info *alloc, size_t size)
{
	t_info		*zone;

	zone = alloc;
	while (zone)
	{
		if (zone->free && zone->size >= size)
			return (zone);
		zone = zone->next;
	}
	return (NULL);
}

static t_info	*search_specific(t_info *memtype, t_info *last, void *ptr)
{
	t_info		*tmp;

	if (last && last->data <= ptr && ptr < (void*)last + last->size)
		return (last);
	tmp = memtype;
	while (tmp && !(tmp->data <= ptr && ptr < (void*)tmp->data + tmp->size))
		tmp = tmp->next;
	return (tmp);
}

static void		update_info(t_info **alloc, size_t size)
{
	t_info		*new;
	t_info		*tmp;
	t_info		*next;

	new = *alloc;
	next = new->next ? new->next : NULL;
	new->free = 0;
	new->data = (void*)*alloc + INFO_SIZE;
	if ((new->size - size - INFO_SIZE) > INFO_SIZE)
	{
		new->next = (void*)new + size + INFO_SIZE;
		tmp = new->next;
		tmp->size = new->size - size - INFO_SIZE;
		new->size = size;
		tmp->free = 1;
		tmp->data = (void*)tmp + INFO_SIZE;
		tmp->next = next;
	}
}

static t_info	*alloc_zone(t_info **zone, size_t size)
{
	t_info		*alloc;

	if (!*zone)
	{
		if ((*zone = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
			return (NULL);
		(*zone)->size = size - INFO_SIZE;
		return (*zone);
	}
	if ((alloc = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
		return (NULL);
	alloc->size = size - INFO_SIZE;
	return (alloc);
}

static void		*alloc_tiny(size_t size)
{
	t_info		*alloc;

	if (!(alloc = find_free_space(g_mem.tiny, size + INFO_SIZE)))
	{
		alloc = alloc_zone(&(g_mem.tiny), TINY_ZONE_SIZE);
		update_info(&alloc, size);
		if (g_mem.tiny_last)
			g_mem.tiny_last->next = alloc;
		g_mem.tiny_last = alloc;
		return (alloc->data);
	}
	update_info(&alloc, size);
	g_mem.tiny_last = alloc;
	return (alloc->data);
}

static void		*alloc_small(size_t size)
{
	t_info		*alloc;

	if (!(alloc = find_free_space(g_mem.small, size + INFO_SIZE)))
	{
		alloc = alloc_zone(&(g_mem.small), SMALL_ZONE_SIZE);
		update_info(&alloc, size);
		if (g_mem.small_last)
			g_mem.small_last->next = alloc;
		g_mem.small_last = alloc;
		return (alloc->data);
	}
	update_info(&alloc, size);
	g_mem.small_last = alloc;
	return (alloc->data);
}

static void		*alloc_large(size_t size)
{
	t_info		*alloc;

	if ((alloc = find_free_space(g_mem.large, size)))
	{
		alloc->next = NULL;
		alloc->free = 0;
		alloc->size = size - INFO_SIZE;
		alloc->data = alloc + 1;
		g_mem.large_last = alloc;
		return (alloc->data);
	}
	if ((alloc = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
		return (NULL);
	alloc->next = NULL;
	alloc->free = 0;
	alloc->size = size - INFO_SIZE;
	alloc->data = alloc + 1;
	if (g_mem.large_last)
		g_mem.large_last->next = alloc;
	g_mem.large_last = alloc;
	if (!g_mem.large)
		g_mem.large = alloc;
	return (alloc->data);
}

static void		*set_each(t_each **last, size_t size, void *loc)
{
	t_each		*tmp;

	if ((tmp = (t_each*)mmap(0, TINY_ZONE_SIZE, PROT, FLAGS, -1, 0)) == MAP_FAILED)
		return (NULL);
	if (*last)
		(*last)->next = tmp;
	tmp->next = NULL;
	tmp->size = size;
	tmp->loc = loc;
	tmp->left = TINY_ZONE_SIZE - sizeof(t_each);
	*last = tmp;
	return ((void*)tmp);
}

static	void	set_info(size_t size, void *loc)
{
	static t_each	*last = NULL;
	t_each			*tmp;

	if (!g_mem.overall)
	{
		g_mem.overall = set_each(&last, size, loc);
		return ;
	}
	if (last->left - sizeof(t_each) <= 0)
	{
		set_each(&last, size, loc);
		return ;
	}
	tmp = last + 1;
	tmp->next = NULL;
	tmp->size = size;
	tmp->loc = loc;
	tmp->left = last->left - sizeof(t_each);
	last->next = tmp;
	last = tmp;
}

t_info		*find_free_space(t_info *alloc, size_t size)
{
	t_info	*tmp;

	if (!(tmp = search_free_space(alloc, size)))
		return (tmp);
	join_free_mem();
	if (!(tmp = search_free_space(alloc, size)))
		return (tmp);
	return (NULL);
}

t_info		*find_specific(void *ptr)
{
	t_info	*tmp;

	if (!(tmp = search_specific(g_mem.tiny, g_mem.tiny_last, ptr)))
		return (tmp);
	if (!(tmp = search_specific(g_mem.small, g_mem.small_last, ptr)))
		return (tmp);
	if (!(tmp = search_specific(g_mem.large, g_mem.large_last, ptr)))
		return (tmp);
	return (NULL);
}

void	*malloc(size_t size)
{
	void	*ret;

	set_info(size, NULL);
	if (size <= 0 || size >= SIZE_MAX)
		return (NULL);
	else if (size <= TINY_SIZE)
		ret = alloc_tiny(size);
	else if (size <= SMALL_SIZE)
		ret = alloc_small(size);
	else
		ret = alloc_large(size);
	if (ret == MAP_FAILED)
		return (NULL);
	return (ret);
}

void	*ft_malloc(size_t size)
{
	void	*ret;

	set_info(size, NULL);
	if (size <= 0 || size >= SIZE_MAX)
		return (NULL);
	else if (size <= TINY_SIZE)
		ret = alloc_tiny(size);
	else if (size <= SMALL_SIZE)
		ret = alloc_small(size);
	else
		ret = alloc_large(size);
	if (ret == MAP_FAILED)
		return (NULL);
	printf("PTR RETURNED\n");
	return (ret);
}
