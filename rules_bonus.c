/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:30:48 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:20:58 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_bonus(t_stack *a)
{
	int	tmp;

	tmp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = tmp;
}

void	sb_bonus(t_stack *a)
{
	int	tmp;

	tmp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = tmp;
}

void	ss_bonus(t_stacks *a)
{
	sa_bonus(a->a);
	sb_bonus(a->b);
}

t_stacks	*pb_bonus(t_stacks *stk)
{
	int	i;

	i = stk->a->array[0];
	stk->b = resize_b(stk->b);
	stk->b->array[0] = i;
	stk->a->size--;
	stk->a = po_p(stk->a);
	return (stk);
}
