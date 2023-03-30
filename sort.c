/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:17:15 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/30 11:10:06 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//ordina il gruppo di 3 numeri sullo stack a(sort3)
void	size3_stack_a(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] < stack->stack_a[2])
		return ;
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack, 0);
		sa(stack, 0);
	}
	else if (stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[0] < \
	stack->stack_a[2] && stack->stack_a[1] < stack->stack_a[2])
		sa(stack, 0);
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0] > \
	stack->stack_a[2] && stack->stack_a[1] > stack->stack_a[2])
		rra(stack, 0);
	else if (stack->stack_a[1] < stack->stack_a[2] && stack->stack_a[0] > \
	stack->stack_a[1] && stack->stack_a[0] > stack->stack_a[2])
		ra(stack, 0);
	else if (stack->stack_a[1] > stack->stack_a[2] && stack->stack_a[0] > \
	stack->stack_a[1] && stack->stack_a[0] > stack->stack_a[2])
	{
		ra(stack, 0);
		sa(stack, 0);
	}
}
// La funzione attraversa l'array in cerca del minimo elemento e lo scambia con il primo elemento non ancora ordinato
// poi cerca il minimo tra gli elementi non ancora ordinati e lo scambia con il secondo elemento non ancora ordinato, e così via
// Questo rende più efficiente l'algoritmo in quanto il pivot scelto sarà più vicino al valore mediano dell'intero array
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
//sort generale
int	sort(t_stack *stack, int size)
{
	if (check_sorted(stack->stack_a, stack->l_stack_a, 0) == 0)
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
//decido il push in base alla flag
int	ft_push(t_stack *stack, int len, int push)
{
	if (push == 0)
		pb(stack, 0);
	else
		pa(stack, 0);
	len--;
	return (len);
}
