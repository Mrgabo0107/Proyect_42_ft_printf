# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:14:32 by gamoreno          #+#    #+#              #
#    Updated: 2022/07/06 22:31:39 by gamoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c ft_printf_printers.c ft_printf_printers2.c ft_printf_aux.c

.c.o:
		$(CC) $(CFLAGS) -g -I includes/ -c $< -o $(<:.c=.o)

OBJS		= $(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
