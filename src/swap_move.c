/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:01:15 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/18 14:24:13 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_base *base)
{
	int	tmp;

	if (!base -> stack_a || base->stack_a -> next)
		return ;
	tmp = base->stack_a->number;
	base->stack_a->number = base->stack_a->next->number;
	base->stack_a->next->number = tmp;
	tmp = base->stack_a->index;
	base->stack_a->index = base->stack_a->next->index;
	base->stack_a->next->index = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_base *base)
{
	int	tmp;

	if (!base -> stack_b || base->stack_b -> next)
		return ;
	tmp = base->stack_b->number;
	base->stack_b->number = base->stack_b -> next->number;
	base->stack_b->next->number = tmp;
	tmp = base->stack_b->index;
	base->stack_b->index = base->stack_b->next->index;
	base->stack_b->next->index = tmp;
	ft_printf("sb\n");
}

void	swap_a_and_b(t_base *base)
{
	swap_a(base);
	swap_b(base);
	ft_printf("ss\n");
}
