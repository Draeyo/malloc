#ifndef MALLOC_H
# define MALLOC_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/mman.h>
# include <sys/types.h>
# include <pthread.h>
# include "libft.h"
# include "ft_printf.h"

// DEBUG
#include <stdio.h>
# define DEBUG() ft_putendl("DEBUG")
// DEBUG

# define PROT	PROT_READ | PROT_WRITE
# define FLAGS	MAP_ANON | MAP_SHARED

# define PAGE_SIZE		(size_t)getpagesize()
# define INFO_SIZE		(size_t)sizeof(t_info)

# define TINY_SIZE		(size_t)PAGE_SIZE * 2
# define SMALL_SIZE		(size_t)PAGE_SIZE * 16

# define TINY_ZONE_SIZE		(size_t)(TINY_SIZE + INFO_SIZE) * 100
# define SMALL_ZONE_SIZE	(size_t)(SMALL_SIZE + INFO_SIZE) * 100
// # define TINY_ZONE_SIZE		(size_t)(TINY_SIZE * 100) + INFO_SIZE
// # define SMALL_ZONE_SIZE	(size_t)(SMALL_SIZE * 100) + INFO_SIZE

# define TINY_TYPE		1
# define SMALL_TYPE		2
# define LARGE_TYPE		3

typedef struct			s_info
{
		struct s_info	*next;
		size_t			size;
		void			*data;
		size_t			free;
}						t_info;

typedef struct			s_each
{
		struct s_each	*next;
		size_t			type;
		size_t			size;
		void			*loc;
		size_t			left;
		char			padding[8];
}						t_each;

typedef struct			s_page
{
		t_info			*tiny;
		t_info			*tiny_last;
		t_info			*small;
		t_info			*small_last;
		t_info			*large;
		t_info			*large_last;
		t_each			*overall;
		char			padding[8];
}						t_page;

t_page					g_mem;

 void	free(void *ptr);
 void	*malloc(size_t size);
 void	*realloc(void *ptr, size_t size);
 void	show_alloc_mem(void);

 void	ft_free(void *ptr);
 void	*ft_malloc(size_t size);

 void	join_free_mem(void);
 size_t	ft_mem_padding(size_t size);

 // search.c
 t_info	*find_free_space(t_info *alloc, size_t size);
 t_info	*find_specific(void *ptr);

 //set.c
 void	*set_each(t_each **last, size_t size, void *loc);
 void	set_info(size_t size, void *loc);
 void	update_info(t_info **alloc, size_t size);

 //alloc.c
 void	*alloc_tiny(size_t size);
 void	*alloc_small(size_t size);
 void	*alloc_large(size_t size);

 void	*calloc(size_t count, size_t size);

#endif
