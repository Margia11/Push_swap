/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:40:19 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/29 16:52:22 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//La funzione viene utilizzata per ordinare tre numeri sullo stack A o su entrambi gli stack A e B.
void	quicksort_stacks(t_stack *stack, int len)
{
	if (len == 3 && stack->l_stack_a == 3)
		size3_stack_a(stack);
	else if (len == 2)
	{
		if (stack->stack_a[0] > stack->stack_a[1])
			sa(stack, 0);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->stack_a[0] < stack->stack_a[1]
				&& stack->stack_a[1] < stack->stack_a[2]))
		{
			if (len == 3 && stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[2])
				sa(stack, 0);
			else if (len == 3 && !(stack->stack_a[2] > stack->stack_a[0]
					&& stack->stack_a[2] > stack->stack_a[1]))
				len = ft_push(stack, len, 0);
			else if (stack->stack_a[0] > stack->stack_a[1])
				sa(stack, 0);
			else if (len++)
				pa(stack, 0);
		}
	}
}
//la funzione la utilizzo per calcolare il pivot(numero random) che in questo caso e'stack/2 e mi servira'per dividere gli stack
// infatti lo salvo da parte e gli elementi minori li pusho in a mentre quelli maggiori in b
int	mid_number(int *pivot, int *stack, int size)
{
	int		*tmp_stack;
	int		i;

	tmp_stack = (int *)malloc(size * sizeof(int));
	if (!tmp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack[i];
		i++;
	}
	temporary_sort(tmp_stack, size);
	*pivot = tmp_stack[size / 2];
	free(tmp_stack);
	return (1);
}
// effettua l'ordinamento della stack_b quando la lunghezza è uguale a 3
int	sort_3_b(t_stack *stack, int len)
{
	if (len == 1)
		pa(stack, 0);
	else if (len == 2)
	{
		if (stack->stack_b[0] < stack->stack_b[1])
			sb(stack, 0);
		while (len--)
			pa(stack, 0);
	}
	else if (len == 3)
	{
		while (len || !(stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[1] < stack->stack_a[2]))
		{
			if (len == 1 && stack->stack_a[0] > stack->stack_a[1])
				sa(stack, 0);
			else if (len == 1 || (len >= 2 && stack->stack_b[0] > stack->stack_b[1])
				|| (len == 3 && stack->stack_b[0] > stack->stack_b[2]))
				len = ft_push(stack, len, 1);
			else
				sb(stack, 0);
		}
	}
	return (0);
}
//implementa l'algoritmo Quicksort per ordinare gli elementi dell'array stack_a in ordine crescente
int	quicksort_a(t_stack *stack, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (check_sorted(stack->stack_a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		quicksort_stacks(stack, len);
		return (1);
	}
	if (!mid_number(&pivot, stack->stack_a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->stack_a[0] < pivot && (len--))
			pb(stack, 0);
		else if (++count_r)
			ra(stack, 0);
	}
	while (numbers / 2 + numbers % 2 != stack->l_stack_a && count_r--)//controlla se il numero di elementi nella pila A è pari o dispari.
		rra(stack, 0);//												 Se è pari, il numero di elementi che devono essere spostati nella pila B è la metà del numero totale di elementi.
	return (quicksort_a(stack, numbers / 2 + numbers % 2, 0)//       Se è dispari, il numero di elementi che devono essere spostati nella pila B è la metà del numero totale di elementi più uno.
		&& quicksort_b(stack, numbers / 2, 0));// controlla il numero di elementi nella pila A, sposta una parte degli elementi nella pila B, ordina le due stack con il quicksort
	return (1);
}

int	quicksort_b(t_stack *stack, int len, int count_r)
{
	int	numbers;
	int	pivot;

	if (check_sorted(stack->stack_b, len, 1) == 1)
		while (len--)
			pa(stack, 0);
	if (len <= 3)
	{
		sort_3_b(stack, len);
		return (1);
	}
	numbers = len;
	if (!mid_number(&pivot, stack->stack_b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (stack->stack_b[0] >= pivot && len--)
			pa(stack, 0);
		else if (++count_r)
			rb(stack, 0);
	}
	while (numbers / 2 != stack->l_stack_b && count_r--)
		rrb(stack, 0);
	return (quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& quicksort_b(stack, numbers / 2, 0));
}
