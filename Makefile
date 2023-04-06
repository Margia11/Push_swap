# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 14:41:45 by amargiac          #+#    #+#              #
#    Updated: 2023/04/06 12:03:07 by amargiac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CHECKER = checker

SRC_1 = pushswap.c

SRC_2 = error.c checks.c move/push.c move/reverse.c move/rotate.c move/swap.c \
		sort.c quicksort.c

SRC_3 = bonus/checker.c

OBJ_1 = $(SRC_2:.c=.o)
OBJ_2 = $(SRC_3:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra -g

FTPRINTF = ft_printf/
LIBFT := libft/
LIBRARY := libft/libft.a ft_printf/libftprintf.a

all :
		make -C $(FTPRINTF)
		make -C $(LIBFT)
	$(CC) $(FLAGS) $(SRC_1) $(SRC_2) $(LIBRARY) -o $(NAME)

bonus : all
	$(CC) $(FLAGS) $(SRC_2) $(SRC_3) $(LIBRARY) -o $(CHECKER)

clean:
		make clean -C $(LIBFT)
		make clean -C $(FTPRINTF)
	rm -f $(OBJ_1)
	rm -f $(OBJ_2)

fclean: clean
		make fclean -C $(LIBFT)
		make fclean -C $(FTPRINTF)
	rm -f $(NAME)
	rm -f $(CHECKER)

re: fclean all clean
