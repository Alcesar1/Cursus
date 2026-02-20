/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:35:03 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/19 11:28:41 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*str_to_tab_of_int(char **av, t_base *base)
{
	base->size = count_numbers(av, base);
	if (base->size == 0)
		return (NULL);
	base->tab = ft_calloc((base->size), sizeof(int));
	if (!base->tab)
		return (NULL);
	return (fill_tab_of_int(av, base));
}

int	count_numbers(char **av, t_base *base)
{
	int	i;
	int	j;
	int	count;

	j = 1;
	count = 0;
	while (av[j] != NULL)
	{
		i = 0;
		base->tmp = ft_split(av[j], ' ');
		if (!base->tmp)
			return (0);
		while (base->tmp[i] != NULL)
			i++;
		free_array(base->tmp);
		base->tmp = NULL;
		count += i;
		j++;
	}
	return (count);
}

void	ft_isnumber(char *c, t_base *base)
{
	int	i;

	i = 0;
	if (c[0] == '\0')
		ft_error_exit(base);
	if ((c[i] == '-' || c[i] == '+') && c[i + 1] != '\0')
		i++;
	while (c[i] != '\0')
	{
		if (ft_isdigit(c[i]))
			i++;
		else
			ft_error_exit(base);
	}
}

int	*fill_tab_of_int(char **av, t_base *base)
{
	base->j = 1;
	base->k = 0;
	while (av[base->j] != NULL)
	{
		base->i = 0;
		base->tmp = ft_split(av[base->j], ' ');
		if (!base->tmp[base->i])
			return (NULL);
		while (base->tmp[base->i] != NULL)
		{
			ft_isnumber(base->tmp[base->i], base);
			base->nbrl = ft_atol(base->tmp[base->i]);
			if (base->nbrl < INT_MIN || base->nbrl > INT_MAX)
				ft_error_exit(base);
			else
				base->tab[base->k] = base->nbrl;
			base->k++;
			base->i++;
		}
		base->j++;
		free_array(base->tmp);
		base->tmp = NULL;
	}
	check_double(base);
	return (base->tab);
}

int	check_double(t_base *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < base->size)
	{
		j = i + 1;
		while (j != base->k)
		{
			if (base->tab[i] == base->tab[j])
				ft_error_exit(base);
			else
				j++;
		}
		i++;
	}
	return (0);
}
