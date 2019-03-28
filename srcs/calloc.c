#include "malloc.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((ptr = malloc(count * size)) == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
