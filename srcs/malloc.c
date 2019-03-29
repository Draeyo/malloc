#include "malloc.h"
#include <execinfo.h>

void	print_trace(int	nb)
{
	void *array[10];
	size_t size;
	char **strings;
	size_t i;

	size = backtrace(array, 10);
	strings = backtrace_symbols(array, size);

	(void)nb;
	for (i = 0; i < size; i++)
		ft_putendl(strings[i]);

	free(strings);
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
	ft_putstr(" ");
	ft_putnbr(size);
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
