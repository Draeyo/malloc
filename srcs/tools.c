#include "malloc.h"

static void		join_by_type(t_info **memtype, t_info **last)
{
	t_info		*next;
	t_info		*tmp;

	if ((tmp = *memtype) == NULL)
		return ;
	while (tmp->next)
	{
		next = tmp->next;
		if (tmp->free && next && next->free)
		{
			tmp->size = tmp->size + next->size + INFO_SIZE;
			tmp->next = next->next;
		}
		else
			tmp = next;
	}
	*last = tmp;
}

void	join_free_mem(void)
{
	join_by_type(&(g_mem.tiny), &(g_mem.tiny_last));
	join_by_type(&(g_mem.small), &(g_mem.small_last));
	join_by_type(&(g_mem.large), &(g_mem.large_last));
}
