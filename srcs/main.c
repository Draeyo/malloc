#include "malloc.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	printf("getpagesize() -> %d\n", getpagesize());
}
