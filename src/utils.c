/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:05:12 by databey           #+#    #+#             */
/*   Updated: 2024/04/03 12:20:53 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*ft_reverse_arr(int arr_len, int *arr)
{
	int	i;
	int	temp;

	i = 0;
	while (i < arr_len / 2)
	{
		temp = arr[i];
		arr[i] = arr[arr_len - i - 1];
		arr[arr_len - i - 1] = temp;
		i++;
	}
	return (arr);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	ft_min(int num1, int num2)
{
	if (ft_abs(num1) < ft_abs(num2))
		return (num1);
	return (num2);
}

static int	ft_is_white_space(char x)
{
	return (x == 32 || x == 9 || x == 10 || x == 11 || x == 12 || x == 13);
}

void	ft_is_full_whsp(int arc, char **params)
{
	int	i;
	int	j;

	i = 0;
	while (++i < arc)
	{
		if (params[i][0] == '\0')
		{
			if (arc == 2)
				exit(0);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	i = 0;
	while (++i < arc)
	{
		j = -1;
		while (params[i][++j])
		{
			if (!ft_is_white_space(params[i][j]))
				return ;
		}
	}
	exit(0);
}
