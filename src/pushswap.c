/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:54:16 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 13:27:51 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>

static void	sort_list(t_stacks *st)
{
	if (is_sorted(st->a_len, st->stack1))
		clean_exit(st, 2);
	else if (st->a_len == 2)
		sa(st);
	else if (st->a_len == 3)
		sort_three_nums(st);
	else if (st->a_len <= 5)
		sort_lower_nums(st);
	else
		sort_stack(st);
}

int	main(int arc, char **args)
{
	t_stacks	*st_stacks;

	if (arc < 2)
		exit(0);
	ft_is_full_whsp(arc, args);
	st_stacks = malloc(sizeof(t_stacks));
	if (!st_stacks)
		fatal_error(st_stacks, -1);
	else
	{
		create_stacks(st_stacks, arc - 1);
		init_stacks(arc, args, st_stacks);
		check_duplicate(st_stacks);
		sort_list(st_stacks);
		clean_exit(st_stacks, 2);
	}
	return (0);
}
