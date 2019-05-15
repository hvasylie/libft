# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 23:34:07 by hvasylie          #+#    #+#              #
#    Updated: 2019/05/12 17:20:58 by hvasylie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE =	ft_memccpy.c	ft_putnbr.c		ft_strequ.c		ft_strnequ.c \
		ft_memchr.c		ft_putnbr_fd.c	ft_striter.c	ft_strnew.c \
		ft_atoi.c		ft_memcmp.c		ft_putstr.c		ft_striteri.c \
		ft_strnstr.c 	ft_bzero.c		ft_memcpy.c		ft_putstr_fd.c \
		ft_strjoin.c	ft_strrchr.c 	ft_isalnum.c	ft_memdel.c	\
		ft_strcat.c		ft_strlcat.c	ft_strsplit.c 	ft_isalpha.c \
		ft_memmove.c	ft_strchr.c		ft_strlen.c		ft_strstr.c \
		ft_isascii.c	ft_memset.c		ft_strclr.c		ft_strmap.c	\
		ft_strsub.c 	ft_isdigit.c	ft_putchar.c	ft_strcmp.c	\
		ft_strmapi.c	ft_strtrim.c 	ft_isprint.c	ft_putchar_fd.c	\
		ft_strcpy.c		ft_strncat.c	ft_tolower.c 	ft_itoa.c \
		ft_putendl.c	ft_strdel.c		ft_strncmp.c	ft_toupper.c \
		ft_memalloc.c	ft_putendl_fd.c	ft_strdup.c		ft_strncpy.c \

OBJECT = $(FILE:%.c=%.o)

GCCW = -Wextra -Wall -Werror

DEL = rm -f

all: $(NAME)

$(NAME): 
	gcc -c $(GCCW) $(FILE)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	$(DEL) $(OBJECT)

fclean: clean
	$(DEL) $(NAME)

re: fclean all
