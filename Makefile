# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:14:32 by gamoreno          #+#    #+#              #
#    Updated: 2023/06/17 12:49:59 by gamoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###

NAME		=	libftprintf.a
CC			= 	cc
FLAGS		=	-Wall -Wextra -Werror
INCLUDES	=	-I $(HEADER)

### PATHS ###
SRC_PATH	=	sources/
HEADER		=	includes/
OBJ_PATH	=	objs/

### FILES ###
SOURCES		=	ft_printf_aux.c ft_printf_printers.c ft_printf_printers2.c \
				ft_printf.c

### FILE MANAGEMENT ###
SRCS		=	$(addprefix $(SRC_PATH),$(SOURCES))
OBJS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.c=.o))
DEPS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.c=.d))	

### COLORS ###
NOC         = \033[0m
GREEN       = \033[1;32m
CYAN        = \033[1;36m

### RULES ###

all: tmp $(NAME)

tmp:
		@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "$(GREEN) Printf function created with success.$(NOC)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
		@$(RM) $(OBJ_PATH)
		@echo "$(GREEN) Non-executable files removed.$(NOC)"
		
fclean:	clean
		@$(RM) $(NAME)
		@echo "$(GREEN) Executable removed$(NOC)"

re:		fclean all

header:
		@echo "$$HEADER_PROJECT"

RM			=	rm -rf

-include $(DEPS)

.PHONY:		all clean fclean re bonus