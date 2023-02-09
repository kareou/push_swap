/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:10:59 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 12:50:52 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_if_alpha(char **a)
{
	int	i;
	int	j;

	i = 0;
	if (!a[i])
		return (0);
	while (a[i])
	{
		j = 0;
		if (a[i][j] == '-' || a[i][j] == '+')
			j++;
		if (!a[i][j])
			return (0);
		while (a[i][j])
		{
			if (!ft_isdigit(a[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_doubel(char **a)
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{
		j = i + 1;
		while (a[j])
		{
			if (ft_atoi(a[j]) == ft_atoi(a[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_number(char **a, int i)
{
	while (a[i])
	{
		free(a[i]);
		i++;
	}
}

void	free_all(t_stacks *sta, char **a, int i, int sign)
{
	free(sta->a->array);
	free(sta->b->array);
	free(sta->a);
	free(sta->b);
	free(sta);
	if (sign)
		free_number(a, i);
	free(a);
}
