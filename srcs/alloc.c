#include "malloc.h"

static t_info   *alloc_zone(t_info **zone, size_t size)
{
    t_info      *alloc;

    if (!*zone)
    {
        if ((*zone = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
            return (NULL);
        (*zone)->size = size - INFO_SIZE;
        return (*zone);
    }
    if ((alloc = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
        return (NULL);
    alloc->size = size - INFO_SIZE;
    return (alloc);
}

void     *alloc_tiny(size_t size)
{
    t_info      *alloc;

    if ((alloc = find_free_space(g_mem.tiny, size + INFO_SIZE)) == NULL)
    {
        alloc = alloc_zone(&(g_mem.tiny), TINY_ZONE_SIZE);
        update_info(&alloc, size);
        if (g_mem.tiny_last)
            g_mem.tiny_last->next = alloc;
        g_mem.tiny_last = alloc;
        return (alloc->data);
    }
    update_info(&alloc, size);
    g_mem.tiny_last = alloc;
    return (alloc->data);
}

void     *alloc_small(size_t size)
{
    t_info      *alloc;

    if ((alloc = find_free_space(g_mem.small, size + INFO_SIZE)) == NULL)
    {
        alloc = alloc_zone(&(g_mem.small), SMALL_ZONE_SIZE);
        update_info(&alloc, size);
        if (g_mem.small_last != NULL)
            g_mem.small_last->next = alloc;
        g_mem.small_last = alloc;
        return (alloc->data);
    }
    update_info(&alloc, size);
    g_mem.small_last = alloc;
    return (alloc->data);
}

void     *alloc_large(size_t size)
{
    t_info      *alloc;

    if ((alloc = find_free_space(g_mem.large, size)) != NULL)
    {
        alloc->next = NULL;
        alloc->free = 0;
        alloc->size = size - INFO_SIZE;
        alloc->data = alloc + 1;
        g_mem.large_last = alloc;
        return (alloc->data);
    }
    if ((alloc = (t_info*)mmap(0, size, PROT, FLAGS, -1, 0)) == MAP_FAILED)
        return (NULL);
    alloc->next = NULL;
    alloc->free = 0;
    alloc->size = size - INFO_SIZE;
    alloc->data = alloc + 1;
    if (g_mem.large_last)
        g_mem.large_last->next = alloc;
    g_mem.large_last = alloc;
    if (g_mem.large == NULL)
        g_mem.large = alloc;
    return (alloc->data);
}
