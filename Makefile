ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME = libft_malloc_$(HOSTTYPE).so

SRC_FILES = malloc.c free.c realloc.c show_alloc_mem.c

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
	@make -s -C $(LIB)
	@$(CC) $(CFLAGS) -shared -o $@ $(OBJ) $(INC) -L$(LIB_PATH) $(LIB_NAME)
	@ln -sf $(NAME) libft_malloc.so

%.o: %.c
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $< -I$(LIB_PATH)

clean:
	@(rm -f $(OBJ))

fclean: clean
	@(rm -f $(NAME))

re: fclean all
