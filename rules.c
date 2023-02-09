/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:30:48 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:29:11 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	tmp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *a)
{
	int	tmp;

	tmp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = tmp;
	ft_printf("sb\n");
}

void	ss(t_stacks	*a)
{
	sa(a->a);
	sb(a->b);
	ft_printf("ss\n");
}

t_stacks	*pb(t_stacks *stk)
{
	int	i;

	i = stk->a->array[0];
	stk->b = resize_b(stk->b);
	stk->b->array[0] = i;
	stk->a->size--;
	stk->a = po_p(stk->a);
	ft_printf("pb\n");
	return (stk);
}
