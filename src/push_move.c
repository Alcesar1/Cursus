/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:21:46 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/18 14:24:51 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_base *base)
{
	t_node	*tmp;

	if (!base->stack_b)
		return ;
	tmp = base->stack_b->next;
	base->stack_b->next = base->stack_a;
	if (base->stack_a)
		base->stack_a->prev = base->stack_b;
	base->stack_a = base->stack_b;
	base->stack_b = tmp;
	if (base->stack_b)
		base->stack_b -> prev = NULL;
	ft_printf("pa\n");
}

void	push_b(t_base *base)
{
	t_node	*tmp;

	if (!base->stack_a)
		return ;
	tmp = base->stack_a->next;
	base->stack_a->next = base->stack_b;
	if (base->stack_b)
		base->stack_b->prev = base->stack_a;
	base->stack_b = base->stack_a;
	base->stack_a = tmp;
	if (base->stack_a)
		base->stack_a -> prev = NULL;
	ft_printf("pb\n");
}
