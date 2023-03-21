/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:26:30 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/21 14:27:44 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *stack)
{
	if (stack->stack_a)
	{
		free(stack->stack_a);
	}
	if (stack->stack_b)
	{
		free(stack->stack_b);
	}
	if (stack->sp)
	{
		free(stack->sp);
	}
	if (stack)
	{
		free(stack);
	}
	write(2, "Error\n", 6);
	exit(0);
}
