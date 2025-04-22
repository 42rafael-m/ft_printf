NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a
SRC = ft_printf.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR) -I.
AR = ar rcs

all: $(NAME)

$(LIBFT_A):
	@make -C $(LIBFT_DIR)

$(NAME): $(LIBFT_A) $(OBJ)
	@cp $(LIBFT_A) $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
