#include "malloc.h"
#include <stdio.h>

static void		to_free(size_t size, void *addr)
{
	t_info		*elem;
	t_info		*tmp;

	elem = mmap(0, sizeof(t_info), PROT, FLAGS, -1, 0);
	elem->size = size;
	elem->data = addr;
	elem->next = NULL;
	tmp = g_mem.overall;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
	}
	else
		g_mem.overall = elem;
}

static void		*alloc_tiny(size_t size)
{
	t_info		*tmp;
	t_info		*tmp_mem;

	if (size > 0)
	{
		tmp = mmap(0, sizeof(t_info), PROT, FLAGS, -1, 0);
		tmp->size = size;
		tmp->next = NULL;
		tmp->data = mmap(0, size, PROT, FLAGS, -1, 0);
		to_free(size, tmp->data);
/*		tmp_mem = g_mem.tiny;
		if (tmp_mem)
		{
			while (tmp_mem->next)
				tmp_mem = tmp_mem->next;
			tmp_mem->next = tmp;
		}
		else
			g_mem.tiny = tmp;*/
		return (tmp->data);
	}
	return (NULL);
}

static void		*alloc_small(size_t size)
{
	t_info		*tmp;
	t_info		*tmp_mem;

	if (size > 0)
	{
		tmp = mmap(0, sizeof(t_info), PROT, FLAGS, -1, 0);
		tmp->size = size;
		tmp->next = NULL;
		tmp->data = mmap(0, size, PROT, FLAGS, -1, 0);
		to_free(size, tmp->data);
//		tmp_mem = g_mem.small;
//		if (tmp_mem)
//		{
//			while (tmp_mem->next)
//				tmp_mem = tmp_mem->next;
//			tmp_mem->next = tmp;
//		}
//		else
//			g_mem.small = tmp;
		return (tmp->data);
	}
	return (NULL);
}

static void		*alloc_large(size_t size)
{
	if (size > 0)
		return mmap(0, size, PROT, FLAGS, -1, 0);
	return (NULL);
}


void	*malloc(size_t size)
{
	void	*ret;

	if (size <= 0)
		return (NULL);
	else if (size <= TINY_SIZE)
		ret = alloc_tiny(size);
	else if (size <= SMALL_SIZE)
		ret = alloc_small(size);
	else
		ret = alloc_large(size);
	return (ret);
}

void	*ft_malloc(size_t size)
{
	void	*ret;

	if (size <= 0)
		return (NULL);
	else if (size <= TINY_SIZE)
		ret = alloc_tiny(size);
	else if (size <= SMALL_SIZE)
		ret = alloc_small(size);
	else
		ret = alloc_large(size);
	return (ret);
}
