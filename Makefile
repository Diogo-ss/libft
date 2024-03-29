# **************************************************************************** #
#                                                                              #
#                                                        ::::::::   :::::::    #
#    Makefile                                            :+:    :+:   :+:      #
#                                                        +:+    +:+   +:+      #
#    By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+      #
#                                                        +#+    +#+   +#+      #
#    Created: 2023/05/26 07:48:32 by Diogo-ss            #+#    #+#   #+#      #
#    Updated: 2023/05/26 07:48:33 by Diogo-ss            ########   #######    #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
HEADER 		= libft.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c

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
