#include "malloc.h"

static void		*resize_alloc(t_info *alloc, size_t size)
{
	void	*ptr;
	t_info	*tmp;
	t_info 	*next;
	size_t	tmp_size;

	next = alloc->next ? alloc->next : NULL;
	if (next && next->free && (alloc->size + next->size) > size)
	{
		tmp_size = next->size;
		tmp = next->next;
		alloc->next =  (void*)alloc->data + size;
		alloc->free = 0;
		next = alloc->next;
		next->size = tmp_size - (size - alloc->size);
		alloc->size = size;
		next->next = tmp;
		next->data = (void*)next + INFO_SIZE;
		next->free = 1;
		return ((void*)alloc->data);
	}
	if ((ptr = malloc(size)) == NULL)
		return (NULL);
	ft_memmove(ptr, alloc->data, alloc->size);
	alloc->free = 1;
	return (ptr);
}

static void		*re_alloc(void *ptr, size_t size)
{
	t_info		*alloc;

	if (ptr == NULL)
		return (malloc(size));
	if ((alloc = find_specific(ptr)) == NULL || (alloc && alloc->free))
		return (NULL);
	if ((ptr != NULL && size == 0) || alloc->size > size)
	{
		alloc->free = 1;
		return (malloc(size));
	}
	join_free_mem();
	return (resize_alloc(alloc, size));
}

void	*realloc(void *ptr, size_t size)
{
	void	*ret;

	size = ft_mem_padding(size);
	ret = re_alloc(ptr, size);
	set_info(size, ptr);
	return (ret);
}