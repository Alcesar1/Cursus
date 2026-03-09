/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:13:18 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/03/09 15:46:14 by Alex GEOFFR      ###   ########.fr       */
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
}

void	ft_error_exit(t_base *base)
{
	if (!base)
		return ;
	if (base)
	{
		if (base->tab)
			free(base->tab);
		free_array(base->tmp);
		base->tmp = NULL;
		if (base->stack_a)
			free_stack(base->stack_a);
		if (base->stack_b)
			free_stack(base->stack_b);
	}
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

int	check_args(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	while (j < ac)
	{
		if (!av[j] || !av[j][0])
			return (0);
		i = 0;
		while (av[j][i] && (av[j][i] == 32 ||
				(av[j][i] >= 9 && av[j][i] <= 13)))
			i++;
		if (!av[j][i])
			return (0);
		j++;
	}
	return (1);
}
