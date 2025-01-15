



NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MAKE_LIB = ar -rcs

LIBFT_DIR	=	./libft
LIBFT		=	$(LIBFT_DIR)/libft.a
SRC 		=	algorithm_utils.c \
				atol.c \
				error_check.c \
				executions.c \
				free.c \
				llist.c \
				main.c \
				push_commands.c \
				reverse_rotate_commands.c \
				rotate_commands.c \
				sorting_algorithm.c \
				swap_commands.c \

OBJ 		= 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -L$(LIBFT_DIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
