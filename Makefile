# ************************************************************************************* #
#                                                                                       #
#                                           ::::::::   :::::::      ::::::::  ::::::::  #
# ft_memset.c                               :+:    :+:   :+:       :+:    :+::+:    :+: #
#                                           +:+    +:+   +:+       +:+       +:+        #
# By: Diogo-ss <diogo-ss@mail.com>          +#+    +:+   +#+  ++#+ +#++:++#+++#++:++#++ #
#                                           +#+    +#+   +#+              +#+       +#+ #
# Created: 2022/06/29 18:00:11 by Diogo-ss  #+#    #+#   #+#       #+#    #+##+#    #+# #
# Updated: 2022/06/29 18:36:17 by Diogo-ss  ########   #######      ########  ########  #
#                                                                                       #
# ************************************************************************************* #

NAME 		= libft.a
HEADER 		= libft.h
CC 			= cc
CFLAGS 		= -Wall -Werror -Wextra
SRC 		:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c

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
