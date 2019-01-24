#include "malloc.h"

static void		print_mem(t_info *zone, char *type)
{
	if (zone)
	{
		ft_putstr(type);
	}
//	while (zone)
//	{
//		if (!zone->free)
//		{
//			ft_putstr(ft_itohex((void*)zone->data));
//			ft_putstr(" - ");
//			ft_putstr(ft_itohex((void*)zone->data + zone->size));
//			ft_putstr(" : ");
//			ft_putnbr(zone->size);
//			ft_putendl(" octets");
//		}
//		zone = zone->next;
//	}
}

void	show_alloc_mem(void)
{
	print_mem(g_mem.tiny, "TINY : ");
//	print_mem(g_mem.small, "SMALL : ");
//	print_mem(g_mem.large, "LARGE : ");
}
