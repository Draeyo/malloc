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

# define TINY_SIZE		(size_t)PAGE_SIZE * 2
# define SMALL_SIZE		(size_t)PAGE_SIZE * 16

typedef struct			s_info
{
		struct s_info	*next;
		size_t			size;
		void			*data;
}						t_info;

typedef struct			s_page
{
		t_info			*tiny;
		t_info			*small;
		t_info			*large;
		t_info			*overall;
}						t_page;

t_page					g_mem;

 void	free(void *ptr);
 void	*malloc(size_t size);
 void	*realloc(void *ptr, size_t size);
 void	show_alloc_mem(void);

 void	ft_free(void *ptr);
 void	*ft_malloc(size_t size);

#endif
