/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:50:49 by amargiac          #+#    #+#             */
/*   Updated: 2023/04/06 12:04:26 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "/Users/amargiac/Desktop/push_swap/push_swap.h"

void		error(t_stack *stack, int flag);
void		ft_moves(t_stack *stack, char *moves);
void		readinput(t_stack *stack);
int			*check_errors(char **argv);

#endif
