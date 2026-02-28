/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_and_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:09:25 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/28 15:29:05 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_min(t_base *base)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = base->stack_a;
	while (tmp->index != base->index_min)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	four_and_five(t_base *base)
{
	int	size_a;

	size_a = base->size;
	while (size_a > 3)
	{
		if
		 base->i = find_index_min(base);
		if (base->i <= size_a / 2)
		{
			while (base->stack_a->index != base->index_min)
				rotate_a(base);
			push_b(base);
		}
		else
		{
			while (base->stack_a->index != base->index_min)
				reverse_rotate_a(base);
			push_b(base);
		}
		base->index_min++;
		size_a--;
	}
	for_three(base);
	while (base->stack_b)
		push_a(base);
}

void	is_sorted(t_base *base)
{
	base->stack_a->index 
}