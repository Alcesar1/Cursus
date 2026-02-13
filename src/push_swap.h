/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:06:17 by jvasconc          #+#    #+#             */
/*   Updated: 2026/02/13 11:16:25 by Alex GEOFFR      ###   ########.fr       */
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

//str* to int* checked
int		*str_to_tab_of_int(char **av, t_base *base);
void	ft_isnumber(char *c, t_base *base);
void	check_limits(t_data *data);
int		check_double(t_base *base);
long	ft_atol(const char *nptr);
int		count_numbers(char **av, t_base *base);
int		*fill_tab_of_int(char **tab, t_base *base);

/*
//preparation before algorithm
t_ctx	*preparation_before_algorithm(t_ctx *ctx);

//args checker
void	args_checker(t_ctx *ctx);

//stack creation and deletion
t_ctx	*stack_creation(t_ctx *ctx);
void	clear_stack(t_stack *stack);

//index_utils
t_ctx	*index_creator(t_ctx *ctx, t_stack *stack);
t_ctx	*reset_index(t_ctx *ctx, t_stack *stack);
t_ctx	*update_two_stacks_indexes(t_ctx *ctx);

//push_swap_utils
t_ctx	*push_back_sorted_stack_b(t_ctx *ctx);
t_ctx	*count_digit(t_ctx *ctx);
t_ctx	*find_max_digit(t_ctx *ctx);
t_ctx	*is_it_sorted(t_ctx *ctx);

//push_swap_utils_more
int		cur_stack(t_ctx *ctx);
void	free_all(t_ctx *ctx);

//next_to_push
t_ctx	*find_stack_size(t_ctx *ctx);
t_ctx	*where_s_next_to_push(t_ctx *ctx);
t_ctx	*who_s_next_to_push(t_ctx *ctx);

//swap functions
t_stack	*swap_general(t_stack *stack);
t_ctx	*swap_a(t_ctx *ctx);
t_ctx	*swap_b(t_ctx *ctx);
t_ctx	*swap_both(t_ctx *ctx);

//push functions
t_ctx	*push_a(t_ctx *ctx);
t_ctx	*push_b(t_ctx *ctx);

//rotate functions
t_stack	*rotate_general(t_stack *stack);
t_ctx	*rotate_a(t_ctx *ctx);
t_ctx	*rotate_b(t_ctx *ctx);
t_ctx	*rotate_both(t_ctx *ctx);

//reverse rotate functions
t_stack	*r_rotate_general(t_stack *stack);
t_ctx	*r_rotate_a(t_ctx *ctx);
t_ctx	*r_rotate_b(t_ctx *ctx);
t_ctx	*r_rotate_both(t_ctx *ctx);

//not_much_numbers
t_ctx	*where_s_index(t_ctx *ctx);
t_ctx	*four_and_five(t_ctx *ctx);
t_ctx	*only_three(t_ctx *ctx, t_stack *stack);
t_ctx	*one_or_two(t_ctx *ctx, t_stack *stack);
t_ctx	*not_much_numbers(t_ctx *ctx);

//radix algorithm
t_ctx	*rotate_push(t_ctx *ctx, t_ctx *(*rotate)(t_ctx *),
			t_ctx *(*push)(t_ctx *));
t_ctx	*r_rotate_push(t_ctx *ctx, t_ctx *(*rotate)(t_ctx *),
			t_ctx *(*push)(t_ctx *));
t_ctx	*push_all_the_digit(t_ctx *ctx);
t_ctx	*sort_radix_position(t_ctx *ctx);
t_ctx	*radix_algorithm(t_ctx *ctx);
*/
#endif
