#include "malloc.h"

void     *set_each(t_each **last, size_t size, void *loc)
{
    t_each      *tmp;

    if ((tmp = (t_each*)mmap(0, TINY_ZONE_SIZE, PROT, FLAGS, -1, 0)) == MAP_FAILED)
        return (NULL);
	ft_memset(tmp, 0, TINY_ZONE_SIZE);
    if (*last)
        (*last)->next = tmp;
    tmp->next = NULL;
    tmp->size = size;
    tmp->loc = loc;
    tmp->left = TINY_ZONE_SIZE - sizeof(t_each);
    *last = tmp;
    return ((void*)tmp);
}

void    set_info(size_t size, void *loc)
{
    static t_each   *last = NULL;
    t_each          *tmp;

    if (!g_mem.overall)
    {
        g_mem.overall = set_each(&last, size, loc);
        return ;
    }
    if (last->left - sizeof(t_each) <= 0)
    {
        set_each(&last, size, loc);
        return ;
    }
    tmp = last + 1;
    tmp->next = NULL;
    tmp->size = size;
    tmp->loc = loc;
    tmp->left = last->left - sizeof(t_each);
    last->next = tmp;
    last = tmp;
}

void     update_info(t_info **alloc, size_t size)
{
    t_info      *new;
    t_info      *tmp;
    t_info      *next;

    new = *alloc;
    next = new->next ? new->next : NULL;
    new->free = 0;
    new->data = (void*)*alloc + INFO_SIZE;
    if ((long)(new->size - size - INFO_SIZE) > (long)INFO_SIZE)
    {
        new->next = (void*)new + size + INFO_SIZE;
        tmp = new->next;
        tmp->size = new->size - size - INFO_SIZE;
        new->size = size;
        tmp->free = 1;
        tmp->data = (void*)tmp + INFO_SIZE;
        tmp->next = next;
    }
}
