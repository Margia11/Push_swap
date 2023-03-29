/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/29 17:42:35 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **argv)
{
	t_stack	stack;
	int			size;
	int			i;

	i = -1;
	size = stack_strlen(argv);
	stack.stack_a = malloc(size * sizeof(int));
	if (!stack.stack_a)
		return ;
	stack.l_stack_a = size;
	stack.stack_b = malloc(size * sizeof(int));
	if (!stack.stack_b)
	{
		free(stack.stack_a);
		return ;
	}
	stack.l_stack_b = 0;
	while (++i < size)
		stack.stack_a[i] = push_swap_atoi(argv[i], stack.stack_a);
	check_doubles(stack.stack_a, size);
	sort(&stack, size);
	free(stack.stack_a);
	free(stack.stack_b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		push_swap(argv);
		return (0);
	}
	return (0);
}
