/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:26:23 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 12:37:34 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>

void	create_stacks(t_stacks *st, int el_count)
{
	st->stack1 = malloc(sizeof(int) * el_count);
	if (st -> stack1 == 0)
		fatal_error(st, 0);
	st -> a_len = el_count;
	st -> b_len = 0;
}

char	**ft_free_all_params(char **result, int ac)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (NULL);
}

static void	ft_check_sign(char **params, t_stacks *st, int ac, int in)
{
	if (params[in][0] == '+' || params[in][0] == '-')
	{
		if (params[in][1] == 0)
		{
			ft_free_all_params(params, ac);
			fatal_error(st, 1);
		}
	}
}

static void	ft_is_valid_params(char **params, t_stacks *st, int ac)
{
	int	i;
	int	j;
	int	fl;

	i = 0;
	while (params[i])
	{
		j = 0;
		fl = 0;
		ft_check_sign(params, st, ac, i);
		while (params[i][j])
		{
			if ((params[i][j] == '+' || params[i][j] == '-') && fl == 1)
			{
				ft_free_all_params(params, ac);
				fatal_error(st, 1);
			}
			if (params[i][j] == '+' || params[i][j] == '-'
				|| ft_isdigit(params[i][j]))
				fl = 1;
			j++;
		}
		i++;
	}
}

void	init_stacks(int arc, char **args, t_stacks *st)
{
	int		i;
	char	**params;

	params = check_args(arc, args, st);
	ft_is_valid_params(params, st, arc);
	if (arc == 2)
	{
		free (st -> stack1);
		i = 0;
		while (params[i])
			i++;
		st -> stack1 = malloc(sizeof(int) * i);
	}
	i = 0;
	while (params[i])
	{
		check_min_max(params[i], st, params, arc);
		st -> stack1[i] = ft_atoi(params[i]);
		i++;
	}
	st -> a_len = i;
	if (arc == 2)
		ft_free_all_params(params, arc);
	ft_reverse_arr(st->a_len, st->stack1);
}