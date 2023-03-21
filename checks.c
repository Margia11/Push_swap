/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:26:27 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/21 15:30:39 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check per vedere se il numero e'un numero intero valido(quindi non decimale e non negativo)

int	check_num(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (
		(s[j] == '-' && (s[j + 1] >= '0' && s[j + 1] <= '9'))
		|| (s[j] >= '0' && s[j] <= '9'))
	{
		i++;
	j++;
		while (s[j])
		{
			if (s[j] >= '0' && s[j] <= '9')
				i++;
			j++;
		}
	}
	if (i == ft_strlen(s))
		return (0);
	return (-1);
}
//check per gli argc
int	check_args(char **args, int argc)
{
	int	i;

	i = -1;
	while (++i < argc)
	{
		if (check_num(args[i + 1]) == -1 || *args[i + 1] == '\0')
		{
			return (-1);
		}
	}
	return (0);
}
//check per controllare quanto e se lo stack e'ordinato

int	check_order(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < stack->argc - 1)
	{
		if (stack->stack_a[j] < stack->stack_a[j + 1])
			i++;
		j++;
	}
	if (i == j)
		return (-1);
	else
		return (0);
}
// verifica se il valore num è già presente in qualsiasi elemento dell'array
static int	ft_check(t_stack *stack, int num, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (stack->stack_a[i] == num)
			return (0);
		i++;
	}
	return (1);
}
// la funzione check_same_nums viene utilizzata per verificare se ci sono duplicati nell'array
//sa e restituisce -1 se ci sono duplicati, altrimenti restituisce 0
int	check_same_nums(t_stack *stack)
{
	int	i;

	i = 0;
	while (i <= stack->l_stack_a - 1)
	{
		if (ft_check(stack, stack->stack_a[i], i) == 1)
			i++;
		else
			return (-1);
	}
	return (0);
}

