/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:05:11 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/04 10:59:33 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/Push_swap/push_swap.h"

void	sa(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (flag == 0)
		ft_printf("sa\n");
}

void	sb(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
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
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (flag == 0)
		ft_printf("ss\n");
}
