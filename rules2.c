/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:26:36 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:03 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*pa(t_stacks *stk)
{
	int	i;

	i = stk->b->array[0];
	stk->a = resize(stk->a);
	stk->a->array[0] = i;
	stk->b = po_pb(stk->b);
	ft_printf("pa\n");
	return (stk);
}

void	ra(t_stack *stk)
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
	ft_printf("ra\n");
}

void	rb(t_stack *stk)
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
	ft_printf("rb\n");
}

void	rr(t_stacks *stk)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stk->a->size - 1)
	{
		tmp = stk->a->array[i];
		stk->a->array[i] = stk->a->array[i + 1];
		stk->a->array[i + 1] = tmp;
		i++;
	}
	i = 0;
	while (i < stk->b->size - 1)
	{
		tmp = stk->b->array[i];
		stk->b->array[i] = stk->b->array[i + 1];
		stk->b->array[i + 1] = tmp;
		i++;
	}
	ft_printf("rr\n");
}
