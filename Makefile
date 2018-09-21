# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 09:31:07 by tngwenya          #+#    #+#              #
#    Updated: 2018/09/03 12:10:24 by tngwenya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tngwenya.filler
SRCC = ./srcs/*.c
FLAGS = -Wall -Wextra -Werror
LIB = ./libft/

all: $(NAME)

$(NAME):
	make -C $(LIB)
	gcc $(FLAGS) -o $(NAME) $(SRCC) ./libft/libft.a

clean:
	make clean -C $(LIB)

fclean: clean
	make fclean -C $(LIB)
	rm -rf $(NAME)

re: fclean all

