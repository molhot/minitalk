NAME = minitalk.a

SRCS = ft_server.c\
		libft/ft_bzero.c libft/ft_calloc.c

OBJS = $(SRCS:.c=.o)

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

$(NAME):$(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f all

re: fclean all

.PHONY:			all clean fclean re bonus