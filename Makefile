# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 10:47:15 by amane             #+#    #+#              #
#    Updated: 2022/03/15 10:47:18 by amane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLS = -Wall -Wextra -Werror
GCC = gcc
RM = rm -f
BIB = ar -rcs

NAME = libftprintf.a

SRC = ft_printchar.o ft_printnbr.o ft_printstr.o\
	  ft_strlen.o ft_printf_hex.o ft_main_print.o\
	  ft_printf.o ft_unsigned_int.o ft_print_pointer.o

all: $(NAME)

$(NAME): $(SRC)
	$(BIB) $(NAME) $(SRC)

%.o : %.c
	$(GCC) $(FLS) -c $< -o $@

clean:
	$(RM) $(SRC)

fclean: clean
	$(RM) $(NAME)

re: fclean all
