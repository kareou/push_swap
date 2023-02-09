/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:56:56 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:41:34 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*po_p(t_stack *sta)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = malloc(sizeof(t_stack));
	tmp->array = malloc(sizeof(t_stack) * (sta->size));
	while (i < sta->size)
	{
		tmp->array[i] = sta->array[i + 1];
		i++;
	}
	tmp->size = i;
	free(sta->array);
	free(sta);
	return (tmp);
}

t_stack	*po_pb(t_stack *sta)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = malloc(sizeof(t_stack));
	tmp->array = malloc(sizeof(t_stack) * (sta->size - 1));
	while (i < sta->size - 1)
	{
		tmp->array[i] = sta->array[i + 1];
		i++;
	}
	tmp->size = i;
	free(sta->array);
	free(sta);
	return (tmp);
}

t_stack	*resize(t_stack *sta)
{
	t_stack	*tmp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	tmp = malloc(sizeof(t_stack));
	tmp->array = malloc(sizeof(t_stack) * sta->size + 1);
	tmp->array[0] = 0;
	while (i <= sta->size)
	{
		tmp->array[i] = sta->array[j];
		i++;
		j++;
	}
	tmp->size = i;
	free(sta->array);
	free(sta);
	return (tmp);
}

t_stack	*resize_b(t_stack *sta)
{
	t_stack	*tmp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	tmp = malloc(sizeof(t_stack));
	tmp->array = malloc(sizeof(t_stack) * sta->size + 1);
	tmp->array[0] = 0;
	while (i <= sta->size)
	{
		tmp->array[i] = sta->array[j];
		i++;
		j++;
	}
	tmp->size = i;
	free(sta->array);
	free(sta);
	return (tmp);
}
