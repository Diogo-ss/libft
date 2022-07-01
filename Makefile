NAME 		= libft.a
HEADER 		= libft.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= ft_memset.c

OBJS 		:= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rsc $(NAME) $(OBJS)
%.o:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean: $(OBJS)
	rm -rf $(OBJS)

fclean: 
	rm -rf $(NAME) $(OBJS)

re: fclean all


.PHONY: all clean fclean
