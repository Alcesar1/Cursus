/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:35:03 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/10 13:24:22 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **final_tab(t_data *data)
{
	int		x;
	int		y;
	int		z;
	char	**array;
	char	**tmp;

	y = 1;
	z = 0;
	while (data->tab[y] != '\0')
	{
		x = 0;
		tmp = ft_split(data->tab[y], ' ');
		while (*tmp[x] != NULL)
			x++;
		z += x;
		y++;
		free_split(tmp, x);
	}
	array = ft_calloc(sizeof(char *) * z+1);
	if (!array)
		return(NULL);
	y = 0;
	z = 0;
	while (data->tab[y] != NULL)
	{
		x = 0;
		tmp = ft_split(data->tab[y], ' ');
		while (tmp[x] != NULL)
		{
			*array[z] = ft_strdup(tmp[x]);
			z++;
			x++;
		}
		y++;
		free_split(tmp, x);
	}
	*array[z] = NULL;
	data->tab = array;
	return (data->tab);
}
/*
void	ft_isnumber(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '-' || c[i] == '+')
			i++;
	if (!(c[i] >= '0' && c[i] <= '9'))
		{
			printf("Error\n");
			exit(1); //free
		}
	while (c[i] != '\0')
	{
		if (c[i] >= '0' && c[i] <= '9')
			i++;
		else
		{
			printf("Error\n");
			exit(1); //free
		}
	}
}

int	check_error(t_data *data)
{
	int	nbr;
	int	y;
	
	y = 0;
	nbr = 0;
	nbr = ft_atoi(data->tab[y]);
	check_limit(nbr);
	check_double(nbr);
}

void	check_limit(t_data *data)
{
	int	y;

	y = 0;
	while (data->tab[y] != NULL)
	{
		if (data->tab[y] < INT_MIN && data->tab[y] > INT_MAX)
			{
				printf("Error\n");
				exit(1); //free
			}
		y++;
	}
	return(0);
}

int	check_double(t_data *data)
{
	int	i;
	int	y;

	i = 0;
	while (data->tab != '\0')
	{
		y = 0;
		if (data->tab[i] = data->tab[y])
		{
			
		}
	}
}
*/