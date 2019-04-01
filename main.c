#include "malloc.h"

int		main(void)
{
	char	*addr;

	ft_putnbr(sizeof(t_info));
	ft_putchar('\n');
	ft_putnbr(sizeof(t_each));
	ft_putchar('\n');
	ft_putnbr(sizeof(t_page));
	ft_putchar('\n');
	for (int i = 0; i < 8024; i++)
	{
		addr = (char*)malloc(1024);
		addr[0] = 42;
	//	free(addr);
	}
	show_alloc_mem();
	return (0);
}
