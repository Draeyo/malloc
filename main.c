#include "malloc.h"
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char	*tiny2;
	int		nb;

	nb = TINY_SIZE - 1;
	for (int i = 0; i < 202; i++)
	{
		tiny2 = (char*)malloc(nb);
		free(tiny2);
		if (i == 100 || i == 150 || i == 200)
			show_alloc_mem();
	}
	//while(1){}
	return (0);
}
