NAME = minitalk.a

CLIENT_NAME = client
SERVER_NAME = server

CLIENT_SRC = ft_client.c ft_atoi.c
SERVER_SRC = ft_server.c ft_printf/ft_printf.c ft_printf/ft_putnbr_string.c ft_printf/ft_putstr.c

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(SERVER_NAME) $(CLIENT_NAME)
	ar -rc $(NAME) $(SERVER_NAME) $(CLIENT_NAME)

$(CLIENT_NAME): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) -o $(CLIENT_NAME)

$(SERVER_NAME): $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_OBJ) -o $(SERVER_NAME)

clean :
	$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean : clean
	$(RM) $(CLIENT_NAME) $(SERVER_NAME) $(NAME)

re : fclean all

.PHONEY : all clean fclean re bonus