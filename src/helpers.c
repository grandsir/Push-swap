/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:57:35 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 12:32:21 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>

void	fatal_error(t_stacks *st, int pst)
{
	if (st->a_len > 0)
		free(st -> stack1);
	if (st->b_len > 0)
		free(st -> stack2);
	if (pst >= 0)
		free(st);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	clean_exit(t_stacks *st, int fl)
{
	if (st->a_len > 0)
		free(st->stack1);
	if (st->b_len > 0)
		free(st->stack2);
	if (fl >= 0)
		free(st);
	exit(0);
}
