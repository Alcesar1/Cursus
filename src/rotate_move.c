/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:15:27 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/18 14:22:30 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_base *base)
{
	t_node	*first;
	t_node	*last;

	if (!base->stack_a || !base->stack_a->next)
		return ;
	first = base->stack_a;
	last = base->stack_a;
	while (last->next)
		last = last->next;
	base->stack_a = first->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_base *base)
{
	t_node	*first;
	t_node	*last;

	if (!base->stack_b || !base->stack_b->next)
		return ;
	first = base->stack_b;
	last = base->stack_b;
	while (last->next)
		last = last->next;
	base->stack_b = first->next;
	base->stack_b->prev = NULL;
	last->next = NULL;
	first->prev = last;
	ft_printf("rb\n");
}

void	rotate_both(t_base *base)
{
	rotate_a(base);
	rotate_b(base);
	ft_printf("rr\n");
}
