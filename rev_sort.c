/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:11:52 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 11:30:56 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_rev(t_stacks *sta)
{
	int	i;

	i = 0;
	while (i <= sta->a->size - 1)
	{
		if (sta->a->array[i] < sta->a->array[i + 1]
			&& i + 1 <= sta->a->size - 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	re_push(t_stacks *sta)
{
	int	ind;
	int	h;

	while (sta->b->size)
	{
		h = find_bigest(sta);
		ind = find_indx(sta, h);
		if (ind <= (sta->b->size / 2))
		{
			if (sta->b->array[0] == h)
				pa(sta);
			else
				rb(sta->b);
		}
		else if (ind > (sta->b->size / 2))
		{
			if (sta->b->array[0] == h)
				pa(sta);
			else
				rrb(sta->b);
		}
	}
}

void	sort_rev(t_stacks *sta)
{
	int	sml;

	sml = find_smallest(sta);
	while (sta->a->size)
	{
		pb(sta);
	}
	re_push(sta);
}
