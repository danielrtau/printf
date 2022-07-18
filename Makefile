# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielro <danielro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 13:03:21 by danielro          #+#    #+#              #
#    Updated: 2022/07/18 20:35:59 by danielro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_memset.c ft_strlen.c ft_strchr.c ft_memchr.c ft_memcpy.c \
 ft_calloc.c ft_itoa.c ft_itoa_ul.c ft_printf.c ft_memmove.c ft_tohex.c \
 ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_u.c ft_printf_specifier.c \
 ft_flag.c

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar csr $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)

bonus:
	@echo

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
