/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:58:29 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 12:56:29 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_bigest(t_stacks *sta)
{
	int	i;
	int	sml;

	i = 0;
	sml = sta->b->array[0];
	while (i < (sta->b->size))
	{
		if (sml < sta->b->array[i])
			sml = sta->b->array[i];
		i++;
	}
	return (sml);
}

void	re_push_a(t_stacks *sta)
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

void	big_sort(t_stacks *sta)
{
	int	spo;
	int	comul;
	int	*semi_stack;

	comul = 0;
	semi_stack = tmp_sort(sta);
	while (sta->a->size != 0)
	{
		spo = find_pos(semi_stack, sta->a->array[0]);
		if (spo <= 15 + comul && spo >= 0 + comul)
		{
			pb(sta);
			comul++;
		}
		else if (spo < 0 + comul)
		{
			pb(sta);
			rb(sta->b);
			comul++;
		}
		else if (spo > 15 + comul)
			ra(sta->a);
	}
	re_push_a(sta);
	free(semi_stack);
}
