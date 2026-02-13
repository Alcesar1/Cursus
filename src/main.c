/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:12:50 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/13 09:46:57 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_base	base;
	int		i;
	int		*tab;

	tab = NULL;
	(void) ac;
	i = 0;
	ft_bzero(&base, sizeof(t_base));
	tab = str_to_tab_of_int(av, &base);
	check_double(&base);
	i = 0;
	while (i < base.size)
	{
		ft_printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (/*ft_error_exit(&base)*/ 0);
}


