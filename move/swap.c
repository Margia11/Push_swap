/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:05:11 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/29 16:04:49 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/push_swap/push_swap.h"

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
	sa(stack, 1);
	sb(stack, 1);
	if (flag == 0)
		ft_printf("ss\n");
}
