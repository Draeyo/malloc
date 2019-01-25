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

static void		print_mem(t_info *zone, char *type)
{
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
			ft_putendl(" octets");
		}
		zone = zone->next;
	}
}

void	show_alloc_mem(void)
{
	print_mem(g_mem.tiny, "TINY : ");
	print_mem(g_mem.small, "SMALL : ");
	print_mem(g_mem.large, "LARGE : ");
}
