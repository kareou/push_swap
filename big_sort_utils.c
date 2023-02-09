/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:54:09 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:19:24 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*tmp_sort(t_stacks *sta)
{
	int	i;
	int	tmp_n;
	int	*tmp;

	i = 0;
	tmp = malloc(sizeof(int *) * sta->a->size);
	while (i < sta->a->size)
	{
		tmp[i] = sta->a->array[i];
		i++;
	}
	i = 0;
	while (i < sta->a->size - 1)
	{
		if (tmp[i] > tmp[i + 1])
		{
			tmp_n = tmp[i];
			tmp[i] = tmp[i + 1];
			tmp[i + 1] = tmp_n;
			i = 0;
		}
		else
			i++;
	}
	return (tmp);
}

int	find_pos(int *a, int number)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		if (a[i] == number)
			return (i);
		i++;
	}
	return (-1);
}

int	find_pos_extra(int *a, int number)
{
	int	i;

	i = 0;
	while (i < 500)
	{
		if (a[i] == number)
			return (i);
		i++;
	}
	return (-1);
}

int	find_indx(t_stacks *sta, int number)
{
	int	i;

	i = 0;
	while (i <= sta->b->size - 1)
	{
		if (sta->b->array[i] == number)
			return (i);
		i++;
	}
	return (-1);
}
