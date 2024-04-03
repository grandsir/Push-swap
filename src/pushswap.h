/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:53:26 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 16:17:37 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "../libft/includes/libft.h"

typedef struct s_stacks
{
	int	*stack1;
	int	*stack2;
	int	a_len;
	int	b_len;
}	t_stacks;

int		find_min_index(int arr_len, int *arr);
int		find_max_num(int a_len, int *stack1);
int		find_index(int num, int arr_len, int *arr);
int		ft_abs(int num);
int		*ft_reverse_arr(int arr_len, int *arr);
int		ft_min(int num1, int num2);
int		is_sorted(int arr_len, int *arr);
int		is_decimal(char *str);
void	sa(t_stacks *st);
void	sb(t_stacks *st);
void	pa(t_stacks *st);
void	pb(t_stacks *st);
void	ra(t_stacks *st, int fl);
void	rb(t_stacks *st, int fl);
void	rra(t_stacks *st, int fl);
void	rrb(t_stacks *st, int fl);
void	fatal_error(t_stacks *st, int pst);
void	clean_exit(t_stacks *st, int fl);
void	check_duplicate(t_stacks *st);
void	check_min_max(char *str, t_stacks *st, char **params, int arc);
void	create_stacks(t_stacks *st, int el_count);
void	init_stacks(int arc, char **args, t_stacks *st);
void	ft_is_full_whsp(int arc, char **params);
void	sort_three_nums(t_stacks *st);
void	sort_lower_nums(t_stacks *st);
void	sort_stack(t_stacks *stacks);
char	**check_args(int arc, char **args, t_stacks *st);
char	**ft_free_all_params(char **result, int arc);
#endif