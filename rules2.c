/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:32:10 by databey           #+#    #+#             */
/*   Updated: 2024/04/15 15:00:30 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->size_a)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		ft_putendl_fd("pb", 1);
	}
}

void	sb(t_stack	*stack)
{
	int	tmp;

	tmp = 0;
	if (stack->size_b < 2)
		return ;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_putendl_fd("sb", 1);
}

void	rb(t_stack	*stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->b[i];
	i++;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = tmp;
	ft_putendl_fd("rb", 1);
}

void	rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_b > 0)
	{
		i = stack->size_b - 1;
		tmp = stack->b[i];
		while (i)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[i] = tmp;
		ft_putendl_fd("rrb", 1);
	}
}
