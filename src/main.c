/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:12:50 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/25 09:47:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_base	base;
	int		*tab;

	ft_bzero(&base, sizeof(t_base));
	if (ac < 2 || !check_args(ac, av))
		return (0);
	tab = str_to_tab_of_int(av, &base);
	if (!tab)
		return (0);
	base = *fill_stack(&base);
	index_stack(&base);
	if (base.size == 2)
		for_two(&base);
	else if (base.size == 3)
		for_three(&base);
	else if (base.size <= 5)
		four_and_five(&base);
	else
		radix_sort(&base);
	free(tab);
	free_stack(base.stack_a);
	free_stack(base.stack_b);
	return (0);
}
