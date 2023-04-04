/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:14:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/04 10:08:50 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/Push_swap/push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1)
		return ;
	i = 0;
	tmp = stack->a[i];
	i++;
	while (i < stack->l_stack_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	if (flag == 0)
		ft_printf("ra\n");
}

void	rb(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	if (stack->l_stack_b == 0 || stack->l_stack_b == 1)
		return ;
	i = 0;
	tmp = stack->b[i];
	i++;
	while (i < stack->l_stack_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = tmp;
	if (flag == 0)
		ft_printf("rb\n");
}

void	rr(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	if (stack->l_stack_a == 0 || stack->l_stack_a == 1
		|| (stack->l_stack_b == 0 || stack->l_stack_b == 1))
		return ;
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->l_stack_a)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	i = 0;
	tmp = stack->b[i];
	while (++i < stack->l_stack_b)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	if (flag == 0)
		ft_printf("rr\n");
}
