/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:13:18 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/13 11:28:04 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (!array || !(*array))
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return ;
}

void	ft_error_exit(t_base *base)
{
	if (!base)
		return ;
	if (base)
	{
		if(base->tab)
			free(base->tab);
		free_array(base->tmp);
		base->tmp = NULL;
	}
	ft_printf("Error\n");
	exit(1);
}

long	ft_atol(const char *nptr)
{
	int		i;
	long	result;
	int		neg;

	neg = 1;
	i = 0;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	if (!(nptr[i] >= '0' && nptr[i] <= '9'))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	return (result * neg);
}

