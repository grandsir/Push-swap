/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:01:06 by databey           #+#    #+#             */
/*   Updated: 2024/04/15 15:01:09 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/includes/libft.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_stack;

int		ft_divide(t_stack *stack, int len);
int		quicksort_a(t_stack *stack, int len, int count);
int		quicksort_b(t_stack *stack, int len, int count);
int		push(t_stack *stack, int len, int operation);
int		sort_three(t_stack *s);
int		median(int *pivot, int *stack_a, int size);
int		basic_sort_a(t_stack *s);
int		basic_sort_both(t_stack *s, int len);
int		basic_sort_b(t_stack *s, int len);
int		check_sort(int *stack, int size, int flag);
int		ft_sort(t_stack *stack, int size);
int		is_num(char *s);
int		argv_strlen(char **str);
int		argv_atoi(char *str, t_stack *stack, char **argv, int check);
void	pa(t_stack *stack);
void	sa(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);
void	pb(t_stack *stack);
void	sb(t_stack	*stack);
void	rb(t_stack	*stack);
void	rrb(t_stack *stack);
void	ss(t_stack	*stack);
void	rr(t_stack	*stack);
void	rrr(t_stack *stack);
void	sort_int_temp(int *tmp_stack, int size);
void	check_repeat(t_stack *stack, int size, char **argv, int check);
void	check_args(char **argv);
void	free_argv(char **argv, t_stack *stack, int control);
void	ft_error(t_stack *stack);
void	push_swap(char **av, int control);

#endif
