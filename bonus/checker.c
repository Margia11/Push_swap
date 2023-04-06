/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:33:44 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/06 10:38:09 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/amargiac/Desktop/push_swap/push_swap.h"

void	error(t_stack *stack, int flag)
{
	free(stack->a);
	free(stack->b);
	if (flag)
		ft_printf("error");
	exit(1);
}

void	ft_moves(t_stack *stack, char *moves)
{
	if (!ft_strcmp(moves, "sa\n"))
		sa(stack, 1);
	else if (!ft_strcmp(moves, "sb\n"))
		sb(stack, 1);
	else if (!ft_strcmp(moves, "ss\n"))
		ss(stack, 1);
	else if (!ft_strcmp(moves, "ra\n"))
		ra(stack, 1);
	else if (!ft_strcmp(moves, "rb\n"))
		rb(stack, 1);
	else if (!ft_strcmp(moves, "rr\n"))
		rr(stack, 1);
	else if (!ft_strcmp(moves, "rra\n"))
		rra(stack, 1);
	else if (!ft_strcmp(moves, "rrb\n"))
		rrb(stack, 1);
	else if (!ft_strcmp(moves, "rrr\n"))
		rrr(stack, 1);
	else if (!ft_strcmp(moves, "pa\n"))
		pa(stack, 1);
	else if (!ft_strcmp(moves, "pb\n"))
		pb(stack, 1);
	else
		error(stack, 1);
}

void	readinput(t_stack *stack)
{
	char		*moves;

	moves = get_next_line(0);
	while (moves)
	{
		ft_moves(stack, moves);
		free(moves);
		moves = get_next_line(0);
	}
	if (check_sorted(stack->a, stack->l_stack_a, 0)
		&& stack->l_stack_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("K0\n");
	error(stack, 0);
}

int	*check_errors(char **argv)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = stack_strlen(argv);
	a = malloc(size * sizeof(int));
	while (++i < size)
		a[i] = push_swap_atoi(argv[i], a);
	check_doubles(a, size);
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		stack.a = check_errors(av);
		stack.l_stack_a = stack_strlen(av);
		stack.b = malloc(stack.l_stack_a * sizeof(int));
		if (!stack.b)
		{
			free(stack.a);
			return (0);
		}
		stack.l_stack_b = 0;
		readinput(&stack);
	}
	return (0);
}
