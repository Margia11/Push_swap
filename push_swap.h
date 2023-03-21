/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:29:52 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/21 16:06:01 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_stack {
	int	*stack_a;
	int	*stack_b;
	int	*sp; // stack provvisoria
	int	l_stack_a; // lunghezza stack-a
	int	l_stack_b; // lunghezza stack-b
	int	current_a; // ultimo valore stack-a
	int	current_b; // ultimo valore stack-b
	int atoierror;
	int	argc;
}			t_stack;

void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		sa(int *stack_a);
void		sb(int *stack_b);
void		ss(int *stack_a, int *stack_b);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);
void		ft_error(t_stack *stack);
int			check_num(char *s);
int			check_args(char **args, int argc);
int			check_order(t_stack *stack);
static int	ft_check(t_stack *stack, int num, int j);
int			check_same_nums(t_stack *stack);
void		size3(int *s, t_stack *stack);
int			ft_choose_size(int arc, t_stack *stack);
void		ft_free(t_stack *stack);
int			arg_to_int(t_stack *stack, int arc, char **args);
#endif
