# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 14:41:45 by amargiac          #+#    #+#              #
#    Updated: 2023/03/21 15:36:48 by amargiac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_1 = pushswap.c

SRC_2 = ft_free.c error.c sort3.c checks.c move/push.c move/reverse.c \
		move/rotate.c move/swap.c

OBJ_1 = $(SRC_1.c=.o)
OBJ_1 = $(SRC_2.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra

FTPRINTF = ft_printf/
LIBFT := libft/
LIBRARY := libft/libft.a ft_printf/libftprintf.a

all :
		make -C $(FTPRINTF)
		make -C $(LIBFT)
	$(CC) $(FLAGS) $(SRC_1) $(SRC_2) $(LIBRARY) -o $(NAME)

bonus : all
	$(CC) $(FLAGS)  $(SRC_2) $(LIBRARY) -o

clean:
		make clean -C $(LIBFT)
		make clean -C $(FTPRINTF)
	rm -f $(OBJ_1)
	rm -f $(OBJ_2)

fclean: clean
		make fclean -C $(LIBFT)
		make fclean -C $(FTPRINTF)
	rm -f $(NAME)

re: fclean all clean
