# NAME PROGRAM #
#
NAME	= push_swap

# PRINTF #
PRINT	= ./printf/libftprintf.a
PRINT_D	= ./printf
# LIBFT #
LIB		= ./libft/libft.a
LIB_D	= ./libft

# SOURCE.C #
SRC		= validation.c operations.c push_swap.c index.c move.c
# COMPILING VARIABLES #
CC		= cc
CFLAG	= -Wall -Wextra -Werror
RM		= rm -f

$(NAME) : $(SRC)
	Make -C ./libft
	Make -C ./printf
	$(CC) $(CFLAG) $(SRC) $(LIB) $(PRINT) -o $(NAME)

$(LIBFT):
	Make -C ./libft

$(PRINTF):
	Make -C ./printf

all:	$(NAME)

clean:
	$(MAKE) fclean -C $(LIB_D)
	$(MAKE) fclean -C $(PRINT_D)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
