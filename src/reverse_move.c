/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:27:23 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/18 14:22:03 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_base *base)
{
	t_node	*first;
	t_node	*last;

	if (!base->stack_a || !base->stack_a->next)
		return ;
	first = base->stack_a;
	last = base->stack_a;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	base->stack_a = last;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_base *base)
{
	t_node	*first;
	t_node	*last;

	if (!base->stack_b || !base->stack_b->next)
		return ;
	first = base->stack_b;
	last = base->stack_b;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	base->stack_b = last;
	ft_printf("rrb\n");
}

void	reverse_rotate_both(t_base *base)
{
	reverse_rotate_a(base);
	reverse_rotate_b(base);
	ft_printf("rrr\n");
}
