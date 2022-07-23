# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielro <danielro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 13:03:21 by danielro          #+#    #+#              #
#    Updated: 2022/07/23 11:43:25 by danielro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB_PATH = ./libft/

SRCS = ft_printf.c ft_tohex.c ft_putnbr.c ft_putchar.c ft_putstr.c \
	   ft_putnbr_u.c ft_specifier.c ft_flag.c ft_opt_string.c  \
	   ft_opt_numbr.c ft_opt_hexa.c ft_opt_pointer.c libft/ft_strlen.c libft/ft_strchr.c 

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar csr $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	$(MAKE) -C $(LIB_PATH)
	gcc $(CFLAGS) -c $(SRCS)

out: re
	gcc $(CFLAGS) ft_printf.c libftprintf.a $(LIB_PATH)libft.a
	./a.out

bonus:
	@echo "Bonus part included"

clean:
	@rm -f $(OBJECTS)
	@make fclean -C $(LIB_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
