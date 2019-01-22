#include "malloc.h"

static void		print_tiny(void)
{
	t_info		*tmp;

	tmp = g_mem.overall;
	printf("TINY : \n");
	while (tmp)
	{
		if (tmp->type == TINY_TYPE)
			printf("%p - %p : %zu octets\n", tmp->data, tmp->data + tmp->size, tmp->size);
		tmp = tmp->next;
	}
}

static void		print_small(void)
{
	t_info		*tmp;

	tmp = g_mem.overall;
	printf("SMALL : \n");
	while (tmp)
	{
		if (tmp->type == SMALL_TYPE)
			printf("%p - %p : %zu octets\n", tmp->data, tmp->data + tmp->size, tmp->size);
		tmp = tmp->next;
	}
}

static void		print_large(void)
{
	t_info		*tmp;

	tmp = g_mem.overall;
	printf("LARGE : \n");
	while (tmp)
	{
		if (tmp->type == LARGE_TYPE)
			printf("%p - %p : %zu octets\n", tmp->data, tmp->data + tmp->size, tmp->size);
		tmp = tmp->next;
	}
}

void	show_alloc_mem(void)
{
	print_tiny();
	print_small();
	print_large();
}
