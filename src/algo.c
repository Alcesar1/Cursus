/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:58:52 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/19 13:16:08 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(t_base *base)
{
	int	max;
	int	bits;

	max = base->size - 1;
	bits = 0;
	while (max >> bits)
		bits++;
	return (bits);
}

void	radix_sort(t_base *base)
{
	int	max;

	max = max_bits(base);
	base->i = 0;
	while (base->i < max)
	{
		base->j = 0;
		while (base->j < base->size)
		{
			if (((base->stack_a->index >> base->i) & 1) == 0)
				push_b(base);
			else
				rotate_a(base);
			base->j++;
		}
		while (base->stack_b)
			push_a(base);
		base->i++;
	}
}
