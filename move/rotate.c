/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:14:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/29 15:46:29 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/push_swap/push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	i;
	int	tmp;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	i = 0;
	tmp = stack->stack_a[i];
	i++;
	while (i < stack->l_stack_a)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->stack_a[i - 1] = tmp;
	if (flag == 0)
		ft_printf("ra\n");
}

void	rb(t_stack *stack, int flag)
{
	int	i;
	int	tmp;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	i = 0;
	tmp = stack->stack_b[i];
	i++;
	while (i < stack->l_stack_b)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}
	stack->stack_b[i - 1] = tmp;
	if (flag == 0)
		ft_printf("rb\n");
}

void	rr(t_stack *stack, int flag)
{
	ra(stack, 1);
	rb(stack, 1);
	if (flag == 0)
		ft_printf("rr\n");
}
