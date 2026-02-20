/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:06:17 by jvasconc          #+#    #+#             */
/*   Updated: 2026/02/19 11:05:46 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	struct s_node	*prev;
	int				index;
	int				number;
	struct s_node	*next;
}	t_node;

typedef struct s_base
{
	t_node		*stack_a;
	t_node		*stack_b;
	int			i;
	int			j;
	int			k;
	char		**tmp;
	int			*tab;
	long		nbrl;
	int			size;
}	t_base;

//free
void	free_array(char **array);
void	ft_error_exit(t_base *base);
void	free_stack(t_node *stack);

//str* to int* checked
int		*str_to_tab_of_int(char **av, t_base *base);
void	ft_isnumber(char *c, t_base *base);
void	check_limits(t_data *data);
int		check_double(t_base *base);
int		count_numbers(char **av, t_base *base);
int		*fill_tab_of_int(char **tab, t_base *base);
int		check_args(int ac, char **av);

//fill stack and index
void	add_back(t_base *base, t_node *new);
t_node	*ft_newnode(int number);
t_base	*fill_stack(t_base *base);
void	index_stack(t_base *base);

//moves
void	swap_a(t_base *base);
void	swap_b(t_base *base);
void	swap_a_and_b(t_base *base);
void	push_a(t_base *base);
void	push_b(t_base *base);
void	rotate_a(t_base *base);
void	rotate_b(t_base *base);
void	reverse_rotate_a(t_base *base);
void	reverse_rotate_b(t_base *base);
void	reverse_rotate_both(t_base *base);

//algo
int		max_bits(t_base *base);
void	radix_sort(t_base *base);

#endif
