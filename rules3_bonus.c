/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:27:42 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:21:53 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_bonus(t_stack *stk)
{
	int	i;
	int	tmp;

	i = stk->size - 1;
	while (i > 0)
	{
		tmp = stk->array[i];
		stk->array[i] = stk->array[i - 1];
		stk->array[i - 1] = tmp;
		i--;
	}
}

void	rrb_bonus(t_stack *stk)
{
	int	i;
	int	tmp;

	i = stk->size - 1;
	while (i > 0)
	{
		tmp = stk->array[i];
		stk->array[i] = stk->array[i - 1];
		stk->array[i - 1] = tmp;
		i--;
	}
}

void	rrr_bonus(t_stacks *stk)
{
	rra_bonus(stk->a);
	rrb_bonus(stk->b);
}
