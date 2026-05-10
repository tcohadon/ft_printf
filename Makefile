# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:26:15 by tcohadon          #+#    #+#              #
#    Updated: 2024/11/06 22:06:21 by tcohadon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putchar.c \
ft_putstrlen.c ft_putnbr.c ft_putunsignednbr.c ft_printlowhex.c ft_printuphex.c\
ft_printptr.c

OBJS := ${SRCS:.c=.o}

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	@echo Compiling ft_printf...
	@ar rc ${NAME} ${OBJS}
	
.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	

clean :
	rm -rf ${OBJS} ${OBJSBONUS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY: re clean fclean all
