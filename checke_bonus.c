/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checke_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:31:39 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 14:35:26 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_move(t_stacks *sta, char **number)
{
	char	*a;
	int		i;

	a = get_next_line(0);
	i = sta->a->size;
	while (a != NULL)
	{
		do_move(a, sta, number);
		a = get_next_line(0);
	}
	check_stack(sta, i);
}

void	alloc_array(t_stacks *my_stack, char **numbers)
{
	my_stack->a->array = malloc(sizeof(t_stack *) * numbers_len(numbers) - 1);
	if (!my_stack->a->array)
	{
		free(my_stack->b);
		free(my_stack->a);
		free(my_stack);
		free_number(numbers, 0);
		free(numbers);
		exit(1);
	}
	my_stack->b->array = malloc(sizeof(t_stack *) * numbers_len(numbers) - 1);
	if (!my_stack->b->array)
	{
		free(my_stack->a->array);
		free(my_stack->b);
		free(my_stack->a);
		free(my_stack);
		free_number(numbers, 0);
		free(numbers);
		exit(1);
	}
}

void	alloc_struct(t_stacks *my_stack)
{
	my_stack->a = malloc(sizeof(t_stack *));
	if (!my_stack->a)
	{
		free(my_stack);
		exit(1);
	}
	my_stack->b = malloc(sizeof(t_stack *));
	if (!my_stack->b)
	{
		free(my_stack->a);
		free(my_stack);
		exit(1);
	}
}

void	start(char **av, int ac)
{
	t_stacks	*my_stack;
	char		**numbers;

	my_stack = malloc(sizeof(t_stacks *));
	if (!my_stack)
		exit(1);
	numbers = number_handel(av, ac);
	if (!check_if_alpha(numbers) || !check_doubel(numbers))
	{
		write(2, "Error\n", 6);
		free(my_stack->b);
		free(my_stack->a);
		free_number(numbers, 0);
		free(numbers);
		free(my_stack);
		exit(1);
	}
	alloc_struct(my_stack);
	alloc_array(my_stack, numbers);
	my_stack->a->size = 0;
	my_stack->b->size = 0;
	fill_stack(numbers, my_stack);
	check_move(my_stack, numbers);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		return (0);
	}
	else
		start(av, ac);
	return (0);
}
