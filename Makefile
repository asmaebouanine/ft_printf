# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 17:13:42 by asbouani          #+#    #+#              #
#    Updated: 2025/08/05 14:23:34 by asbouani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

LIBC = ar rc

RM = rm -f

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putstr.c ft_putnbr_unsigned.c

OBJS = ${SRCS:.c=.o}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@
	
all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME}

re: fclean all
.PHONY: clean		
