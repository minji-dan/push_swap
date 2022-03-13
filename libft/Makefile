CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	libft.a
SRCS		=	ft_bzero.c \
				ft_putendl_fd.c \
				ft_strlen.c \
				ft_calloc.c \
				ft_strncmp.c \
				ft_isdigit.c \
				ft_atoll.c

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar -cr $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re