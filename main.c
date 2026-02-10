/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:12:50 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/10 13:27:23 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av, t_data *data)
{
	char	**array;
	int		i;

	i = 0;
	array = final_tab(av);
	while(array[i])
	{
		printf("%s\n", &array[i]);
		i++;
	}
	return (0);
}

