/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:11:42 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 12:48:58 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*sort_three(t_stacks	*sta)
{
	if ((sta->a->array[0] < sta->a->array[1])
		&& (sta->a->array[1] > sta->a->array[2]))
	{
		rra(sta->a);
		if (sta->a->array[0] > sta->a->array[1])
			sa(sta->a);
		return (sta);
	}
	if ((sta->a->array[0] > sta->a->array[1]))
	{
		if ((sta->a->array[0] > sta->a->array[2]))
			ra(sta->a);
		if (sta->a->array[1] > sta->a->array[2])
			ra(sta->a);
		if (sta->a->array[0] > sta->a->array[1])
			sa(sta->a);
		return (sta);
	}
	return (sta);
}

int	find_smallest(t_stacks *sta)
{
	int	i;
	int	sml;
	int	indix;

	i = 0;
	sml = sta->a->array[0];
	while (i <= (sta->a->size - 1))
	{
		if (sml > sta->a->array[i])
		{
			indix = i;
			sml = sta->a->array[i];
		}
		i++;
	}
	return (indix);
}

t_stacks	*sort_four(t_stacks *sta)
{
	int	i;
	int	j;
	int	sml;

	j = 0;
	i = find_smallest(sta);
	sml = sta->a->array[i];
	while (sta->a->array[0] != sml)
	{
		if (i <= (sta->a->size / 2))
			ra(sta->a);
		else if (i > (sta->a->size / 2))
			rra(sta->a);
	}
	pb(sta);
	sort_three(sta);
	pa(sta);
	return (sta);
}

t_stacks	*sort_five(t_stacks *sta)
{
	int	i;
	int	j;
	int	sml;

	j = 0;
	i = find_smallest(sta);
	sml = sta->a->array[i];
	while (sta->a->array[0] != sml)
	{
		if (i <= (sta->a->size / 2))
			ra(sta->a);
		else if (i > (sta->a->size / 2))
			rra(sta->a);
	}
	pb(sta);
	sort_four(sta);
	pa(sta);
	return (sta);
}
