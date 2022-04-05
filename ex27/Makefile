# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 00:13:22 by jpaulo-d          #+#    #+#              #
#    Updated: 2022/04/04 00:25:09 by jpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_display_file.c
NAME	= ft_display_file
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:
		${CC} ${CFLAGS} -o $(NAME) $(SRCS)

clean:
		${RM} *.o

fclean:	clean
		${RM} $(NAME)

.PHONY:	all clean fclean
