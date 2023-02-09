/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:26:36 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:21:36 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*pa_bonus(t_stacks *stk)
{
	int	i;

	i = stk->b->array[0];
	stk->a = resize(stk->a);
	stk->a->array[0] = i;
	stk->b = po_pb(stk->b);
	return (stk);
}

void	ra_bonus(t_stack *stk)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stk->size - 1)
	{
		tmp = stk->array[i];
		stk->array[i] = stk->array[i + 1];
		stk->array[i + 1] = tmp;
		i++;
	}
}

void	rb_bonus(t_stack *stk)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stk->size - 1)
	{
		tmp = stk->array[i];
		stk->array[i] = stk->array[i + 1];
		stk->array[i + 1] = tmp;
		i++;
	}
}

void	rr_bonus(t_stacks *stk)
{
	ra_bonus(stk->a);
	rb_bonus(stk->b);
}
