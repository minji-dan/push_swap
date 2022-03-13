PUSH_SWAP = push_swap
CC				= gcc
CFLAG			= -Wextra -Wall -Werror
RM				= rm -f
AR				= ar cr

SRCS_DIR		= ./srcs/
SRCS =	ft_deque.c \
		ft_free.c \
		ft_p.c \
		ft_parsing.c \
		ft_presort.c \
		ft_r.c \
		ft_rotate_util.c \
		ft_rotate.c \
		ft_rr.c \
		ft_s.c \
		ft_sort.c \
		push_swap.c

OBJS_DIR = ./objs/
OBJS = $(SRCS: .c=.o)

LIBFT			= libft
LIBFT_FLAGS		= -L $(LIBFT) -lft
INC_FLAGS		= -I includes -I $(LIBFT)

P_SRCS = $(addprefix $(SRCS_DIR), $(SRCS))
P_OBJS = $(addprefix $(OBJS_DIR), $(OBJS))


all: $(LIBFT) $(PUSH_SWAP) 

$(LIBFT):
	@make --silent --directory=$(LIBFT)

$(PUSH_SWAP): $(P_OBJS)
	$(CC) $(CFLAG) -o $(PUSH_SWAP) $(P_OBJS)



bonus:
	make WITH_BONUS=1 all
 
%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAGS)

clean:
	@make clean --silent --directory=$(LIBFT)
	$(RM) $(P_OBJS)
fclean: clean
	@make fclean --silent --directory=$(LIBFT)
	$(RM) $(PUSH_SWAP)

re: fclean all

.PHONY: all bonus clean fclean re $(LIBFT)