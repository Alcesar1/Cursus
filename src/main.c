/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:12:50 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/19 14:33:53 by Alex GEOFFR      ###   ########.fr       */
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
	radix_sort(&base);
	free(tab);
	free_stack(base.stack_a);
	free_stack(base.stack_b);
	return (0);
}
