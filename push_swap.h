/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:29:52 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/06 11:59:05 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "/Users/amargiac/Desktop/push_swap/ft_printf/ft_printf.h"
# include "/Users/amargiac/Desktop/push_swap/libft/libft.h"

typedef struct s_stack {
	int	*a;
	int	*b;
	int	l_stack_a;
	int	l_stack_b;
}			t_stack;

void		pa(t_stack *stack, int flag);
void		pb(t_stack *stack, int flag);
void		ra(t_stack *stack, int flag);
void		rb(t_stack *stack, int flag);
void		rr(t_stack *stack, int flag);
void		sa(t_stack *stack, int flag);
void		sb(t_stack *stack, int flag);
void		ss(t_stack *stack, int flag);
void		rra(t_stack *stack, int flag);
void		rrb(t_stack *stack, int flag);
void		rrr(t_stack *stack, int flag);
void		ft_error(int *stack);
int			stack_strlen(char **argv);
int			check_sorted(int *stack, int size, int order);
void		check_doubles(int *stack, int size);
int			push_swap_atoi(char *str, int *stack);
void		size3_stack_a(t_stack *stack);
void		push_swap(char **argv);
int			sort(t_stack *stack, int size);
void		temporary_sort(int *stack_tmp, int size);
int			ft_push(t_stack *stack, int len, int push);
void		quicksort_stacks(t_stack *stack, int len);
int			mid_number(int *pivot, int *pile, int size);
int			sort_3_b(t_stack *stack, int len);
int			quicksort_a(t_stack *stack, int len, int count_r);
int			quicksort_b(t_stack *stack, int len, int count_r);
int			ft_strcmp(const char *s1, const char *s2);
#endif
