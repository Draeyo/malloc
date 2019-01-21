#include "malloc.h"
#include <stdio.h>

#define DEBUG printf("DEBUG\n")
#define alloc(x) mmap(0, x, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0)
#define dalloc(x, y) mmap(x, y, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0)

typedef struct	s_alloc
{
	void		*alloc;
}				t_alloc;

int		main(int ac, char **av)
{
	char	*str;
	char	c;
	int		nb;
	int		i;
	int		pagesize;
	t_alloc	*test;
//	printf("getpagesize() -> %d\n", getpagesize());
	
	pagesize = getpagesize();
	test = (t_alloc*)alloc(sizeof(t_alloc));
	printf("struct size : %lu\n", sizeof(t_alloc));
	if (ac < 2)
	{
		printf("./a.out str size\n");
		return (0);
	}
	c = av[1][0];
	if (ac >= 3)
		nb = atoi(av[2]);
	else
		nb = 50;
	if ((nb + sizeof(t_alloc)) < pagesize)
		test->alloc = alloc(nb + 1);
	else
	{
		int		nb_tmp = nb;
		void	*tmp;

		test->alloc = alloc(nb_tmp);
		tmp = test->alloc;
		test->alloc = &(test->alloc[nb_tmp]);
		nb_tmp -= pagesize;
		while (nb_tmp > 0)
		{
			dalloc(test->alloc, (nb_tmp - pagesize > 0) ? nb_tmp : nb_tmp + 1);
			test->alloc = &(test->alloc[nb_tmp]);
			nb_tmp -= pagesize;
		}
		test->alloc = tmp;
	}
	str = (char*)test->alloc;
//	str = (char*)mmap(0, nb + 1, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);
	for (i = 0 ; i < nb ; i++)
		str[i] = c;
	str[i] = '\0';
	printf("%s\n", str);
	if (munmap(str, nb + 1) < 0)
		printf("FREE ERROR\n");
	else
		printf("FREE SUCCESS\n");
	return (0);
}
