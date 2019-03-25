ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME = libft_malloc_$(HOSTTYPE).so

SYMLINK = libft_malloc.so

SRC_FILES = malloc.c free.c tools.c show_alloc_mem.c search.c set.c alloc.c realloc.c calloc.c

SRC_PATH = srcs/

SRC = $(addprefix $(SRC_PATH),$(SRC_FILES))

OBJ = $(SRC:.c=.o)

LIB_NAME = -lft

LIB_PATH = libft/

INC = includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

RED = \033[31;44m
GREEN = \033[31;44m
ENDC = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -s -C $(LIB_PATH)
	@$(CC) $(CFLAGS) -shared -o $@ $(OBJ) -L$(LIB_PATH) $(LIB_NAME)
	@ln -sF $(NAME) $(SYMLINK)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INC) -o $@ -c $< -I$(LIB_PATH)

clean:
	@(rm -f $(OBJ))

fclean: clean
	@(rm -f $(NAME) $(SYMLINK))
	@make -s -C $(LIB_PATH) fclean

re: fclean all
