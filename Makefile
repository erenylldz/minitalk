NAME = serverclient.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
PRINTF = ft_printf/libftprintf.a

CLIENT = client
SERVER = server

SRCS = server.c client.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SERVER) $(CLIENT) $(OBJS)

$(SERVER): $(OBJS)
	make -C ./ft_printf
	$(CC) $(CFLAGS) server.c $(PRINTF) -o $(SERVER)

$(CLIENT): $(OBJS)
	$(CC) $(CFLAGS) client.c $(PRINTF) -o $(CLIENT)

clean:
	make clean -C ./ft_printf
	rm -rf $(SERVER) $(CLIENT) $(OBJS)

fclean: clean
	make fclean -C ./ft_printf

re: fclean all bonus

.PHONY: all clean fclean re bonus
