#include "malloc.h"

static void		print_hex(unsigned long nb)
{
	const char	*tmp = "0123456789abcdef";

	if (nb >= 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
		ft_putchar(tmp[nb]);
}

static void		print_memory(void *ptr)
{
	ft_putstr("0x");
	print_hex((unsigned long)ptr);
}

static int		print_mem(t_info *zone, char *type)
{
	int		ret_size;

	ret_size = 0;
	if (zone)
	{
		ft_putstr(type);
		ft_putstr("0x");
		print_memory((void*)zone);
		ft_putchar('\n');
	}
	while (zone)
	{
		if (!zone->free)
		{
			print_memory((void*)zone->data);
			ft_putstr(" - ");
			print_memory((void*)zone->data + zone->size);
			ft_putstr(" : ");
			ft_putnbr(zone->size);
			ret_size += zone->size;
			ft_putendl(" octets");
		}
		zone = zone->next;
	}
	return (ret_size);
}

void	show_alloc_mem(void)
{
	int		total_size;

	total_size = 0;
	total_size += print_mem(g_mem.tiny, "TINY : ");
	total_size += print_mem(g_mem.small, "SMALL : ");
	total_size += print_mem(g_mem.large, "LARGE : ");
	if (total_size)
	{
		ft_putstr("Total : ");
		ft_putnbr(total_size);
		ft_putendl(" octets");
	}
}
