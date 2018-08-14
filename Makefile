# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 23:10:54 by zbennett          #+#    #+#              #
#    Updated: 2018/07/22 23:11:00 by zbennett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.c \
			eval_expr.c \
			misc.c

OBJ		=	$(SRC:.c=.o)

NAME	=	eval_expr

all: $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
