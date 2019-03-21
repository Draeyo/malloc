#include "malloc.h"

static t_info   *search_free_space(t_info *alloc, size_t size)
{
    t_info      *zone;

    zone = alloc;
    while (zone)
    {
        if (zone->free && zone->size >= size)
            return (zone);
        zone = zone->next;
    }
    return (NULL);
}

static t_info   *search_specific(t_info *memtype, t_info *last, void *ptr)
{
    t_info      *tmp;

    if (last && last->data <= ptr && ptr < (void*)last + last->size)
        return (last);
    tmp = memtype;
    while (tmp && !(tmp->data <= ptr && ptr < (void*)tmp->data + tmp->size))
        tmp = tmp->next;
    return (tmp);
}

t_info      	*find_free_space(t_info *alloc, size_t size)
{
    t_info  *tmp;

    if ((tmp = search_free_space(alloc, size)) != NULL)
        return (tmp);
    join_free_mem();
    if ((tmp = search_free_space(alloc, size)) != NULL)
        return (tmp);
    return (NULL);
}

t_info      	*find_specific(void *ptr)
{
    t_info  *tmp;

    if ((tmp = search_specific(g_mem.tiny, g_mem.tiny_last, ptr)) != NULL)
        return (tmp);
    if ((tmp = search_specific(g_mem.small, g_mem.small_last, ptr)) != NULL)
        return (tmp);
    if ((tmp = search_specific(g_mem.large, g_mem.large_last, ptr)) != NULL)
        return (tmp);
    return (NULL);
}
