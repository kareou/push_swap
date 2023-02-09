NAME = push_swap

BONUS = checker

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = main.c rules.c rules2.c rules3.c rules_utils.c big_sort_utils.c big_sort.c\
		extra_big_sort.c number_handel.c error_handel.c sorting.c rev_sort.c

B_SRC = checke_bonus.c utils_bonus.c rules_bonus.c rules2_bonus.c rules3_bonus.c rules_utils.c\
		gnl/get_next_line.c gnl/get_next_line_utils.c number_handel.c error_handel.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(B_SRC:.c=.o)

$(NAME): $(OBJ)
	make -C libft
	make -C printf
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a printf/libftprintf.a -o $(NAME)

$(BONUS): $(OBJ_B)
	make -C libft
	make -C printf
	$(CC) $(CFLAGS) $(OBJ_B) libft/libft.a printf/libftprintf.a -o $(BONUS)

all: $(NAME)

bonus : $(BONUS)

clean:
	make clean -C libft
	make clean -C printf
	rm -f *.o

fclean: clean
	make fclean -C libft
	make fclean -C printf
	rm -f $(NAME)
	rm -f $(BONUS)

re: fclean all

.PHONY: all clean fclean re