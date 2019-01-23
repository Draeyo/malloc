#ifndef MALLOC_H
# define MALLOC_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/mman.h>
# include <sys/types.h>

// DEBUG
#include <stdio.h>
# define DEBUG(x) printf("DEBUG %d\n", x)
// DEBUG

# define PROT	PROT_READ | PROT_WRITE
# define FLAGS	MAP_ANON | MAP_PRIVATE

# define PAGE_SIZE		(size_t)getpagesize()
# define INFO_SIZE		(size_t)sizeof(t_info)

# define TINY_SIZE		(size_t)PAGE_SIZE * 2
# define SMALL_SIZE		(size_t)PAGE_SIZE * 16

# define TINY_DATA_SIZE		(size_t)(TINY_SIZE + META SIZE)
# define SMALL_DATA_SIZE	(size_t)(SMALL_SIZE + META_SIZE)

# define TINY_ZONE_SIZE		(size_t)(TINY__SIZE + INFO_SIZE) * 100
# define SMALL_ZONE_SIZE	(size_t)(SMALL_SIZE + INFO_SIZE) * 100

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
		s_each			*next;
		size_t			type;
		size_t			size;
		void			*loc;
		size_t			left;
}						t_each;

typedef struct			s_page
{
		t_info			*tiny;
		t_info			*tiny_last;
		t_info			*small;
		t_info			*small_last;
		t_info			*large;
		t_info			*large_last;
		t_each			overall;
}						t_page;

t_page					g_mem;

 void	free(void *ptr);
 void	*malloc(size_t size);
 void	*realloc(void *ptr, size_t size);
 void	show_alloc_mem(void);

 void	ft_free(void *ptr);
 void	*ft_malloc(size_t size);

#endif