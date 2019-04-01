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

	ft_putstr("SIGNAL : ");
	ft_putnbr(nb);
	ft_putchar('\n');
	free(strings);
	//perror(NULL);
	exit(1);
}

size_t	ft_mem_padding(size_t size)
{
	size_t ret;

	ret = 0;
	while (ret < size)
		ret += 16;
	return (ret);
}

void	*malloc(size_t size)
{
	void	*ret;

	//set_info(size, NULL);
	for (int i = 0; i < 18; ++i)
	{
		signal(i, &print_trace);
	}
	//signal(4, &print_trace);
	size = ft_mem_padding(size);
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
	ft_putnbr((int)ret % 16);
	ft_putstr(" ");
	ft_putnbr(size % 16);
	ft_putchar('\n');
	return (ret);
}

void	*ft_malloc(size_t size)
{
	void	*ret;

//	size = ft_mem_padding(size);
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
