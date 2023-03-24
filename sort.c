/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:17:15 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/24 15:01:33 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort(t_stack *stack, int size)
{
	if (check_sorted(stack->stack_a, stack->l_stack_a, 0) == 0)
	{
		if (size == 2)
			sa(stack);
		else if (size == 3)
			size3(stack);
	}
	return (0);
}

void	size3(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] < stack->stack_a[2])
		return ;
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack);
		sa(stack);
	}
	else if (stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] < stack->stack_a[2])
		sa(stack);
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] > \
	stack->stack_a[2] && stack->stack_a[1] > stack->stack_a[2])
		rra(stack);
	else if (stack->stack_a[1] < stack->stack_a[2] && stack->stack_a[0] > \
	stack->stack_a[1] && stack->stack_a[0] > stack->stack_a[2])
		ra(stack);
	else if (stack->stack_a[1] > stack->stack_a[2] && stack->stack_a[0] > \
	stack->stack_a[1] && stack->stack_a[0] > stack->stack_a[2])
	{
		ra(stack);
		sa(stack);
	}
}
