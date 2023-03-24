/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:04:44 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/24 16:48:33 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/push_swap/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	tmp = stack->stack_a[stack->current_a - 1];
	i = stack->current_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	tmp = stack->stack_b[stack->current_b - 1];
	i = stack->current_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1
		|| (stack->l_stack_b == 0 || stack->l_stack_b == 1))
		return ;
	tmp = stack->stack_a[stack->current_a - 1];
	i = stack->current_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
	tmp = stack->stack_b[stack->current_b - 1];
	i = stack->current_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_printf("rrr\n");
}
