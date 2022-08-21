# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:10:39 by lporras-          #+#    #+#              #
#    Updated: 2022/08/14 14:25:07 by lporras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

RM = /bin/rm -f

SRC =	ft_printf.c 		\
		ft_putchar.c 		\
		ft_putnbr.c 		\
		ft_putnbr_unsig.c	\
		ft_putstr.c			\
		ft_printf_hex.c 	\

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
