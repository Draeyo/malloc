#include "malloc.h"
#include <execinfo.h>

void	print_trace(int	nb)
{
//	void *array[10];
//	size_t size;
//	char **strings;
//	size_t i;
//
//	size = backtrace(array, 10);
//	strings = backtrace_symbols(array, size);

	(void)nb;
//	for (i = 0; i < size; i++)
//		ft_putendl(strings[i]);

//	free(strings);
	show_alloc_mem();
//	ft_print_mem(g_mem.tiny_last);
//	ft_putchar('\n');
//	ft_putendl("LAST");
//	ft_print_mem(g_mem.tiny_last->data);
//	ft_putchar('\n');
//	ft_putendl("OVERALL");
//	while (g_mem.tiny)
//	{
//		ft_print_mem(g_mem.tiny->data);
//		ft_putstr(" : ");
//		ft_putnbr(g_mem.tiny->size);
//		ft_putstr(" : ");
//		ft_print_mem(g_mem.tiny->data + g_mem.tiny->size);
//		ft_putstr(" : ");
//		ft_putstr(g_mem.tiny->free == 0 ? "NOT FREE" : "FREE");
//		ft_putchar('\n');
//		if (g_mem.tiny->next)
//		{
//			ft_putnbr(g_mem.tiny->next->data - (g_mem.tiny->data + g_mem.tiny->size));
//			ft_putchar('\n');
//		}
//		if (g_mem.tiny->next && (g_mem.tiny->data + g_mem.tiny->size) == g_mem.tiny->next->data)
//			ft_putendl("OVERLAP");
//		g_mem.tiny = g_mem.tiny->next;
//	}
	exit(1);
}

void	*malloc(size_t size)
{
	void	*ret;

	//set_info(size, NULL);
	signal(11, &print_trace);
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
	set_info(size, ret);
	ft_putstr("+ ");
	ft_print_mem(ret);
	ft_putchar('\n');
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
	return (ret);
}
