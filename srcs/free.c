#include "malloc.h"
#include <stdio.h>

static size_t	find_mem(void *ptr)
{
	t_info	*tmp;
	void	*addr;
	size_t	ret;
	t_info	*prev;

	tmp = g_mem.overall;
	prev = NULL;
	while (tmp)
	{
		addr = tmp->data;
		printf("tmp: %p\n", addr);
		printf("ptr: %p\n", ptr);
		if (addr == ptr)
		{
			if (prev)
				prev->next = tmp->next;
			else
				g_mem.overall = tmp->next;
			ret = tmp->size;
			munmap(tmp, sizeof(t_info));
			return (ret);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (0);
}

void	free(void *ptr)
{
	size_t	i;

	if (ptr)
	{
		i = find_mem(ptr);
		if (i == 0)
			printf("Can\'t find mem.\n");
		else
		{
			printf("free string : %s, on address %p\n", ptr, ptr);
			if (!munmap(ptr, i))
				printf("FREE DONE\n");
			else
				printf("FREE FAILED\n");
		}
	}
}

void	ft_free(void *ptr)
{
	size_t	i;

	if (ptr)
	{
		i = find_mem(ptr);
		if (i == 0)
			printf("Can\'t find mem.");
		else
		{
			printf("free string : %s, on address %p\n", ptr, ptr);
			if (!munmap(ptr, i))
				printf("FREE DONE\n");
			else
				printf("FREE FAILED\n");
		}
	}
}