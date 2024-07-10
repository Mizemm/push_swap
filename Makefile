NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = push_swap.c range.c find_highest.c give_index.c sort.c medium_sort.c list_filler.c tiny_sort.c error_check.c push_utils.c rrotate_utils.c rotate_utils.c swap_utils.c
LIBFT = libft/ft_lstclear_bonus.c libft/ft_atoi.c libft/ft_lstadd_back_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstlast_bonus.c libft/ft_lstnew_bonus.c libft/ft_split.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_substr.c
FT_PRINTF = ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putnbr.c ft_printf/ft_hex.c ft_printf/ft_upperhex.c ft_printf/ft_putstr.c ft_printf/ft_unsignednbr.c
OFILES = $(CFILES:.c=.o) $(LIBFT:.c=.o) $(FT_PRINTF:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) push_swap.h
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all