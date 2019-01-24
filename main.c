#include "malloc.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*str;
	char	*test;
	char	*test2;
	char	c;
	int		nb;
	int		i;

	c = av[1][0];
	nb = atoi(av[2]);
	str = (char*)malloc(nb + 1);
	test = (char*)malloc(nb + 1);
	test2 = (char*)malloc(nb + 1);
	i = 0;
	while (i < nb)
	{
		str[i] = c;
		test[i] = c;
		test2[i] = c;
		i++;
	}
	str[i] = '\0';
	test[i] = '\0';
	test2[i] = '\0';
	printf("str: %s\n", str);
	printf("test: %s\n", test);
	printf("test2: %s\n", test2);
	show_alloc_mem();
	free(test2);
	free(test);
	free(str);
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
