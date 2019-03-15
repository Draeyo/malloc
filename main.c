#include "malloc.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*str, *test1, *test2, *test3, *test4, *tiny2, *tiny3;
	char	c;
	int		nb;
	int		i;

	//c = av[1][0];
	//nb = atoi(av[2]);
	nb = TINY_SIZE - 1;
	//str = (char*)malloc(nb + 1);
	//tiny2 = (char*)malloc(nb + 10);
	//tiny3 = (char*)malloc(nb + 100);
	//test1 = (char*)malloc(SMALL_SIZE - TINY_SIZE);
	//test2 = (char*)malloc(SMALL_SIZE + TINY_SIZE);
	//test3 = (char*)malloc(SMALL_SIZE - (TINY_SIZE * 2));
	//test4 = (char*)malloc(SMALL_SIZE + (TINY_SIZE * 2));
	
	//i = 0;
	//while (i < nb)
	//{
	//	str[i] = c;
	//	test[i] = c;
	//	test2[i] = c;
	//	i++;
	//}
	//str[i] = '\0';
	//test[i] = '\0';
	//test2[i] = '\0';
	//printf("str: %s\n", str);
	//printf("test: %s\n", test);
	//printf("test2: %s\n", test2);
	//show_alloc_mem();
	//free(test2);
	//free(test1);
	//free(str);
	//free(tiny2);
	//free(tiny3);
	//free(test4);
	//free(test3);
	//show_alloc_mem();
	for (int i = 0; i < 100; i++)
	{
//		str = (char*)malloc(nb);
		tiny2 = (char*)malloc(nb);
//		free(str);
//		free(tiny2);
	}
	//show_alloc_mem();
	//printf("PAGE_SIZE: %zu\n", PAGE_SIZE);
	//printf("INFO_SIZE: %zu\n", INFO_SIZE);
	//printf("TINY_SIZE: %zu\n", TINY_SIZE);
	//printf("SMALL_SIZE: %zu\n", SMALL_SIZE);
	//printf("TINY_DATA_SIZE: %zu\n", TINY_DATA_SIZE);
	//printf("SMALL_DATA_SIZE: %zu\n", SMALL_DATA_SIZE);
	//printf("TINY_ZONE_SIZE: %zu\n", TINY_ZONE_SIZE);
	//printf("SMALL_ZONE_SIZE: %zu\n", SMALL_ZONE_SIZE);
	return (0);
}
