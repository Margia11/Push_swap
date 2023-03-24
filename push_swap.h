/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:29:52 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/24 17:15:44 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"


typedef struct s_stack {
	int	*stack_a;
	int	*stack_b;
	int	l_stack_a; // lunghezza stack-a
	int	l_stack_b; // lunghezza stack-b
	int	current_a; // ultimo valore stack-a
	int	current_b; // ultimo valore stack-b
}			t_stack;

void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);
void		ft_error(int *stack);
int			stack_strlen(char **argv);
int			check_sorted(int *stack, int size, int order);
void		check_doubles(int *stack, int size);
int			push_swap_atoi(char *str, int *stack);
void		size3(t_stack *stack);
void		push_swap(char **argv);
int			sort(t_stack *stack, int size);
void		porcodio_sorting(t_stack *stack, int len);
#endif
