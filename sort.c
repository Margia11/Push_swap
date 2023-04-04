/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:17:15 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/04 10:56:27 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/Push_swap/push_swap.h"

void	temporary_sort(int *stack_tmp, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack_tmp[i] > stack_tmp[j])
			{
				tmp = stack_tmp[i];
				stack_tmp[i] = stack_tmp[j];
				stack_tmp[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	size3_stack_a(t_stack *stack)
{
	if (stack->a[0] < stack->a[1] && stack->a[0] < \
	stack->a[2] && stack->a[1] < stack->a[2])
		return ;
	else if (stack->a[0] < stack->a[1] && stack->a[0] < \
	stack->a[2] && stack->a[1] > stack->a[2])
	{
		rra(stack, 0);
		sa(stack, 0);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] < \
	stack->a[2] && stack->a[1] < stack->a[2])
		sa(stack, 0);
	else if (stack->a[0] < stack->a[1] && stack->a[0] > \
	stack->a[2] && stack->a[1] > stack->a[2])
		rra(stack, 0);
	else if (stack->a[1] < stack->a[2] && stack->a[0] > \
	stack->a[1] && stack->a[0] > stack->a[2])
		ra(stack, 0);
	else if (stack->a[1] > stack->a[2] && stack->a[0] > \
	stack->a[1] && stack->a[0] > stack->a[2])
	{
		ra(stack, 0);
		sa(stack, 0);
	}
}


int	sort(t_stack *stack, int size)
{
	if (check_sorted(stack->a, stack->l_stack_a, 0) == 0)
	{
		if (size == 2)
			sa(stack, 0);
		else if (size == 3)
			size3_stack_a(stack);
		else
			quicksort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stack *stack, int len, int push)
{
	if (push == 0)
		pb(stack, 0);
	else
		pa(stack, 0);
	len--;
	return (len);
}
