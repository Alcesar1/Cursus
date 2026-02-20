/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_and_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:36:08 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2026/02/19 13:20:19 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_base	*fill_stack(t_base *base)
{
	int		i;
	t_node	*new_node;

	i = 0;
	while (i < base->size)
	{
		new_node = ft_newnode(base->tab[i]);
		add_back(base, new_node);
		i++;
	}
	return (base);
}

t_node	*ft_newnode(int number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->number = number;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_base *base, t_node *new)
{
	t_node	*last;

	if (new == NULL)
		base->stack_a = new;
	if (!base->stack_a)
	{
		base->stack_a = new;
		return ;
	}
	last = base->stack_a;
	while (last->next != NULL)
		last = last ->next;
	last->next = new;
	new->prev = last;
}

void	index_stack(t_base *base)
{
	t_node	*tmp;
	t_node	*tmp2;
	int		count;

	tmp = base->stack_a;
	while (tmp)
	{
		count = 0;
		tmp2 = base->stack_a;
		while (tmp2)
		{
			if (tmp2->number < tmp->number)
				count++;
			tmp2 = tmp2->next;
		}
		tmp->index = count;
		tmp = tmp->next;
	}
}
