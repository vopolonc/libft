#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 13:54:42 by vopolonc          #+#    #+#              #
#    Updated: 2018/11/16 14:03:31 by vopolonc         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
F = -Wall -Werror -Wextra -I. -c
O = *.o
S = *.c

all: $(NAME)

$(NAME):
	gcc $(F) $(S) 
	ar rcs $(NAME) $(O)
	ranlib $(NAME)

clean:
	rm -f $(O)

fclean: clean
	rm -f $(NAME)

re: fclean all