/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:30:45 by databey           #+#    #+#             */
/*   Updated: 2024/04/15 15:30:52 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	free_argv(char **argv, t_stack *stack, int control)
{
	int	i;

	i = 0;
	if (control == 1)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
	ft_error(stack);
}

void	ft_error(t_stack *stack)
{
	free (stack->a);
	free (stack->b);
	free (stack);
	write(2, "Error\n", 6);
	exit (1);
}
