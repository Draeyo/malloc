#include "malloc.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((ptr = malloc(count * size)))
		ft_bzero(ptr, count * size);
	return (ptr);
}
