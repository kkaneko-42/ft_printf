# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkaneko <kkaneko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 02:16:29 by kkaneko           #+#    #+#              #
#    Updated: 2022/06/05 00:43:37 by kkaneko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

SRCS := ft_printf.c ft_putint.c ft_putuint_base.c
OBJS := $(SRCS:.c=.o)

INCDIR := ./includes/
LIBFTDIR := ./libft
LIBFT	:= libft.a

CC := gcc
FLAGS := -Wall -Wextra -Werror -I $(INCDIR)

$(NAME): $(OBJS)
	make -C $(LIBFTDIR)
	ar -rcs $@ $^ $(LIBFTDIR)/*.o

.c.o:
	$(CC) $(FLAGS) -c $^

all: $(NAME)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFTDIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFTDIR)/$(LIBFT)

re: fclean all

.PHONY: all clean fclean re
