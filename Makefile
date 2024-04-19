NAME = push_swap
LIBFT = ./libft
LIBFTA = ./libft/libft.a
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
CFILES = utils.c sort_func.c basic_sorts.c sorter.c rules1.c rules2.c rules3.c quick_sort.c free.c push_swap.c
OBJS = $(CFILES:.c=.o)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cc $(CFLAGS) $(OBJS) $(LIBFTA) -o $(NAME)

all: $(NAME)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re