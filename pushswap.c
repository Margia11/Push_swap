/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/24 17:04:45 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **argv)
{
	t_stack		*stack;
	int			size;
	int			i;

	i = -1;
	//write(1, "1\n", 2);
	size = stack_strlen(argv);
	stack->stack_a = malloc(size * sizeof(int));
	//write(1, "2\n", 2);
	if (!stack->stack_a)
		return ;
	//write(1, "3\n", 2);
	stack->l_stack_a = size;
	//write(1, "4\n", 3);
	stack->stack_b = malloc(size * sizeof(int));
	//write(1, "5\n", 2);
	if (!stack->stack_b)
	{
		//write(1, "6\n", 2);
		free(stack->stack_a);
		return ;
		//write(1, "7\n", 2);
	}
	stack->l_stack_b = 0;
	while (++i < size)
		stack->stack_a[i] = push_swap_atoi(argv[i], stack->stack_a);
	check_doubles(stack->stack_a, size);
	//write(1, "8\n", 2);
	sort(stack, size);
	//write(1, "9\n", 2);
	free(stack->stack_a);
	free(stack->stack_b);
}

int	main(int argc, char **argv)
{
	write(1, "0\n", 2);
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
	 		argv = ft_split(*argv, ' ');
		push_swap(argv);
		//write(1, "00\n", 3);
		return (0);
	}
	return (0);
}
