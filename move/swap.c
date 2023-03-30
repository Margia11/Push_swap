/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:05:11 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/30 15:21:37 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/Push_swap/push_swap.h"

void	sa(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	tmp = 0;
	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	if (flag == 0)
		ft_printf("sa\n");
}

void	sb(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	tmp = 0;
	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
	if (flag == 0)
		ft_printf("sb\n");
}

void	ss(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1
		|| (stack->l_stack_b == 0 || stack->l_stack_b == 1))
		return ;
	tmp = 0;
	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
	if (flag == 0)
		ft_printf("ss\n");
}
