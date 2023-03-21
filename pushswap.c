/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/21 16:05:40 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int arc, char **args)
{
	t_stack	*stack;

	if (arc == 1)
		return (0);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	if (check_args(args, arc - 1) == -1)
		ft_free(stack);
	stack->argc = arc - 1;
	if (arg_to_int(stack, arc , args) == -1)
	{
		ft_free(stack);
		return (0);
	}
	if (check_order(stack) == -1)
		ft_free(stack);
	if (ft_choose_size(arc, stack) == -1)
		ft_free(stack);
	return (0);
}

int	ft_choose_size(int arc, t_stack *stack)
{
	if (check_same_nums(stack) == -1)
		return (-1);
	else
	{
		if (arc == 3 || arc == 4)
			size3(stack->stack_a, stack);
	}
	return (0);
}

int	arg_to_int(t_stack *stack, int arc, char **args)
{
	int	i;

	i = 0;
	while (i != arc - 1)
	{
		if (check_num(args[i + 1]) == -1)
			return (-1);
		stack->stack_a[i] = ft_atoi(args[i + 1]);
		if (stack->atoierror == 1)
			return (-1);
		stack->sp[i] = ft_atoi(args[i + 1]);
		i++;
	}
	return (0);
}
