/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:44:45 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 12:53:30 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_stacks *sta, int old_size)
{
	int	i;

	i = 0;
	if (sta->a->size != old_size)
	{
		ft_printf("KO\n");
		exit(0);
	}
	while (i <= sta->a->size - 1)
	{
		if (sta->a->array[i] > sta->a->array[i + 1]
			&& i + 1 < sta->a->size - 1)
		{
			ft_printf("KO\n");
			exit(0);
		}
		i++;
	}
	ft_printf("OK\n");
}

void	exit_error(t_stacks *sta, char **number)
{
	write(2, "ERROR\n", 6);
	free_all(sta, number, 0, 0);
	exit (1);
}

void	do_move(char *a, t_stacks *sta, char **number)
{
	if (ft_strncmp(a, "sa", 2) == 0)
		sa_bonus(sta->a);
	else if (ft_strncmp(a, "sb", 2) == 0)
		sb_bonus(sta->b);
	else if (ft_strncmp(a, "ss", 2) == 0)
		ss_bonus(sta);
	else if (ft_strncmp(a, "rra", 3) == 0)
		rra_bonus(sta->a);
	else if (ft_strncmp(a, "rrb", 3) == 0)
		rrb_bonus(sta->b);
	else if (ft_strncmp(a, "rrr", 3) == 0)
		rrr_bonus(sta);
	else if (ft_strncmp(a, "ra", 2) == 0)
		ra_bonus(sta->a);
	else if (ft_strncmp(a, "rb", 2) == 0)
		rb_bonus(sta->b);
	else if (ft_strncmp(a, "rr", 2) == 0)
		rr_bonus(sta);
	else if (ft_strncmp(a, "pa", 2) == 0)
		pa_bonus(sta);
	else if (ft_strncmp(a, "pb", 2) == 0)
		pb_bonus(sta);
	else
		exit_error(sta, number);
}
