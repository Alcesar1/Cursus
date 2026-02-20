/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_and_less.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:33:16 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/20 13:59:13 by Alex GEOFFR      ###   ########.fr       */
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
		rotate_a(base);.
	}
	else if (a > b && c > a && c > b)
		swap_a(base);
	else if (a < b && b > c && c > a)
		reverse_rotate_a(base);
	else if (a > b && a > c && c >b)
		rotate_a(base);
	else if (a>b && a > c && c < b)
	{
		swap_a(base);
		reverse_rotate_a(base);
	}
}

void	for_four(t_base *base)
{

	for_three(base);
}

void	for_five(t_base *base)
{
	
}
