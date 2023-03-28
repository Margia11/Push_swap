/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:04:44 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/27 10:51:47 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/push_swap/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	i = stack->l_stack_a - 1;
	tmp = stack->stack_a[i];
	while (i)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	i = stack->l_stack_b - 1;
	tmp = stack->stack_b[i];
	while (i)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	i;
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1
		|| (stack->l_stack_b == 0 || stack->l_stack_b == 1))
		return ;
	i = stack->l_stack_a - 1;
	tmp = stack->stack_a[i];
	while (i)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	i = stack->l_stack_b - 1;
	tmp = stack->stack_b[i];
	while (i--)
		stack->stack_b[i] = stack->stack_b[i - 1];
	stack->stack_b[i] = tmp;
	ft_printf("rrr\n");
}
