NAME = libftprintf.a
SOURCES = ft_functions.c ft_printf.c \
ft_typecheck.c ft_putnbr.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)


clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
