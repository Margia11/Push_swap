/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:04:02 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/30 10:53:31 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/Push_swap/push_swap.h"

void	pb(t_stack *stack, int flag)
{
	int	i;

	if (stack->l_stack_a)
	{
		stack->l_stack_b++;
		i = stack->l_stack_b;
		while (--i > 0)
			stack->stack_b[i] = stack->stack_b[i - 1];
		stack->stack_b[0] = stack->stack_a[0];
		i = -1;
		stack->l_stack_a--;
		while (++i < stack->l_stack_a)
			stack->stack_a[i] = stack->stack_a[i + 1];
		if (flag == 0)
			ft_printf("pb\n");
	}
	else
		return ;
}

void	pa(t_stack *stack, int flag)
{
	int	i;

	if (stack->l_stack_b)
	{
		stack->l_stack_a++;
		i = stack->l_stack_a;
		while (--i > 0)
			stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_a[0] = stack->stack_b[0];
		i = -1;
		stack->l_stack_b--;
		while (++i < stack->l_stack_b)
			stack->stack_b[i] = stack->stack_b[i + 1];
		if (flag == 0)
			ft_printf("pa\n");
	}
	else
		return ;
}
