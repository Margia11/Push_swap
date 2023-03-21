/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:17:15 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/21 15:20:04 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size3(int *s, t_stack *stack)
{
	if (stack->argc == 2)
	{
		if (s[0] > s[1])
			sa(s);
	}
	else if (s[0] < s[1] && s[0] < s[2] && s[1] < s[2])
		return ;
	else if (s[0] < s[1] && s[0] < s[2] && s[1] > s[2])
	{
		rra(stack);
		sa(s);
	}
	else if (s[0] > s[1] && s[0] < s[2] && s[1] < s[2])
		sa(s);
	else if (s[0] < s[1] && s[0] > s[2] && s[1] > s[2])
		rra(stack);
	else if (s[1] < s[2] && s[0] > s[1] && s[0] > s[2])
		ra(stack);
	else if (s[1] > s[2] && s[0] > s[1] && s[0] > s[2])
	{
		ra(stack);
		sa(s);
	}
}
