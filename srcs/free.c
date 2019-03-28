#include "malloc.h"
#include <stdio.h>

static void		free_large(void *ptr)
{
	t_info		*tmp;

	tmp = g_mem.large;
	if (!tmp)
		return ;
	while (tmp->next)
	{
		if ((void*)tmp->next == ptr)
		{
			tmp->next = tmp->next->next;
			munmap(tmp->next, tmp->next->size);
			return ;
		}
		tmp = tmp->next;
	}
}

void	free(void *ptr)
{
	t_info	*tmp;

	if (!ptr)
		return ;
	ft_putstr("- ");
	ft_print_mem(ptr);
	ft_putchar('\n');
	tmp = find_specific(ptr);
	if (tmp && tmp->size > SMALL_ZONE_SIZE)
		free_large(tmp);
	if (tmp)
		tmp->free = 1;
	join_free_mem();
}

void	ft_free(void *ptr)
{
	t_info	*tmp;

	if (!ptr)
		return ;
	tmp = find_specific(ptr);
	if (tmp && tmp->size > SMALL_ZONE_SIZE)
		free_large(tmp);
	if (tmp)
		tmp->free = 1;
	join_free_mem();
}
