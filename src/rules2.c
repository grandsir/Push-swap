/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:41:19 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 16:04:27 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_stacks *st, int fl)
{
	int	temp;

	if (st->a_len <= 1)
		return ;
	temp = st->stack1[st->a_len - 1];
	ft_memmove(st->stack1 + 1, st->stack1, sizeof(int) * (st->a_len - 1));
	st -> stack1[0] = temp;
	if (fl)
		ft_printf("ra\n");
}

void	rb(t_stacks *st, int fl)
{
	int	temp;

	if (st -> b_len <= 1)
		return ;
	temp = st -> stack2[st->b_len - 1];
	ft_memmove(st -> stack2 + 1, st -> stack2, sizeof(int) * (st->b_len - 1));
	st -> stack2[0] = temp;
	if (fl)
		ft_printf("rb\n");
}
