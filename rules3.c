/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:27:42 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:24 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stk)
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
	ft_printf("rra\n");
}

void	rrb(t_stack *stk)
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
	ft_printf("rrb\n");
}

void	rrr(t_stacks *stk)
{
	int	i;
	int	tmp;

	i = stk->a->size - 1;
	while (i > 0)
	{
		tmp = stk->a->array[i];
		stk->a->array[i] = stk->a->array[i - 1];
		stk->a->array[i - 1] = tmp;
		i--;
	}
	i = stk->b->size - 1;
	while (i > 0)
	{
		tmp = stk->b->array[i];
		stk->b->array[i] = stk->b->array[i - 1];
		stk->b->array[i - 1] = tmp;
		i--;
	}
	ft_printf("rrr\n");
}
