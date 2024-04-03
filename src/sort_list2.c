/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:22:03 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 16:17:30 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_min_index(int arr_len, int *arr)
{
	long	min_num;
	int		min_num_index;
	int		i;

	i = 0;
	min_num = 2147483648 * 2;
	min_num_index = 0;
	while (i < arr_len)
	{
		if (min_num > arr[i])
		{
			min_num_index = i;
			min_num = arr[i];
		}
		i++;
	}
	return (min_num_index);
}

static void	push_b(t_stacks *st, int step_a, int step_b)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (step_a < 0)
		while (++i < ft_abs(step_a))
			rra(st, 1);
	else if (step_a > 0)
		while (++i < ft_abs(step_a))
			ra(st, 1);
	if (step_b < 0)
		while (++j < ft_abs(step_b))
			rrb(st, 1);
	else if (step_b > 0)
		while (++j < ft_abs(step_b))
			rb(st, 1);
	pb(st);
}

#include <stdio.h>
static void	push_min_step_a(t_stacks *st, int i)
{
	int	step_a_count;

	i = find_min_index(st->a_len, st->stack1);
	step_a_count = ft_min(st->a_len - i - 1, -i - 1);
	push_b(st, step_a_count, 0);
}

void	sort_lower_nums(t_stacks *st)
{
	int	i;

	i = -1;
	while (++i < 2 && st->a_len > 3)
		push_min_step_a(st, 0);
	sort_three_nums(st);
	i = st->b_len;
	while (i > 0)
	{
		i--;
		pa(st);
	}
}

int find_max_num(int a_len, int *stack1)
{
	long int max;
	int i;

	i = 0;
	max = stack1[0];
	while (i < a_len)
	{
		if (stack1[i] > max)
			max = stack1[i];
		i++;
	}
	return (max);
}