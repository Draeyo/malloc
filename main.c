#include "malloc.h"

int		main(void)
{
	char	*tiny2, *tiny3;
	int		nb;

	nb = 50;
	show_alloc_mem();
//	for (int i = 0; i < 12; i++)
//	{
	tiny2 = (char*)malloc(nb);
	tiny3 = (char*)malloc(nb);
	free(tiny2);
	free(tiny3);
	show_alloc_mem();
	//	if (i == 100 || i == 150 || i == 200)
//	}
	return (0);
}
