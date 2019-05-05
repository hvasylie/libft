# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvasylie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 23:34:07 by hvasylie          #+#    #+#              #
#    Updated: 2019/05/05 00:35:22 by hvasylie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = ft_atoi.c ft_isprint.c ft_putchar.c ft_putstr_fd.c ft_strdup.c \
	   ft_strmapi.c ft_bzero.c	ft_memalloc.c ft_putchar_fd.c ft_strclr.c \
	   ft_striter.c	ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_putendl.c \
	   ft_strcmp.c	ft_striteri.c ft_strnew.c ft_isalpha.c ft_memdel.c \
	   ft_putendl_fd.c ft_strcpy.c	ft_strlen.c	ft_tolower.c ft_isdigit.c \
	   ft_memset.c	ft_putstr.c	ft_strdel.c	ft_strmap.c	ft_toupper.c

OBJECT = *.o

all: $(FILE)

$(NAME): $(OBJECT)
	ar -rcs libft.a $(OBJECT)

$(OBJECT):
	gcc -Wall -Wextra -Werror -c  $(FILE)

clean:
	rm: $(OBJECT)
fclean:
	rm -f: $(NAME)
re:
	fclean: all

