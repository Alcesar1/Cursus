/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_and_less.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:33:16 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/25 10:28:10 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_two(t_base *base)
{
	if (base->stack_a->index > base->stack_a->next->index)
		swap_a(base);
}

void	for_three(t_base *base)
{
	int	a;
	int	b;
	int	c;

	a = base->stack_a->index;
	b = base->stack_a->next->index;
	c = base->stack_a->next->next->index;
	if (a < b && a < c && c < b)
	{
		swap_a(base);
		rotate_a(base);
	}
	else if (a > b && c > a && c > b)
		swap_a(base);
	else if (a < b && b > c && c < a)
		reverse_rotate_a(base);
	else if (a > b && a > c && c >b)
		rotate_a(base);
	else if (a > b && a > c && c < b)
	{
		swap_a(base);
		reverse_rotate_a(base);
	}
}
