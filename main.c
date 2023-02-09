/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:53:58 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/09 11:12:51 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stacks *sta)
{
	int	i;

	i = 0;
	while (i <= sta->a->size - 1)
	{
		if (sta->a->array[i] > sta->a->array[i + 1]
			&& i + 1 <= sta->a->size - 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
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

void	alloc_struct(t_stacks *my_stack, char **numbers)
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
}

void	start(char **av, int ac)
{
	t_stacks	*my_stack;
	char		**numbers;

	my_stack = malloc(sizeof(t_stacks *));
	if (!my_stack)
		exit(1);
	numbers = number_handel(av, ac);
	alloc_struct(my_stack, numbers);
	alloc_array(my_stack, numbers);
	my_stack->a->size = 0;
	my_stack->b->size = 0;
	fill_stack(numbers, my_stack);
	if (check_sort(my_stack))
		return ;
	else if (sorted_rev(my_stack) && numbers_len(numbers) > 5)
		sort_rev(my_stack);
	else if (numbers_len(numbers) == 3 || numbers_len(numbers) == 2)
		my_stack = sort_three(my_stack);
	else if (numbers_len(numbers) <= 5)
		my_stack = sort_five(my_stack);
	else if (numbers_len(numbers) > 5 && numbers_len(numbers) <= 100)
		big_sort(my_stack);
	else if (numbers_len(numbers) > 100)
		extra_big_sort(my_stack);
	free_all(my_stack, numbers, 0, 0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		exit (EXIT_SUCCESS);
	start(av, ac);
	return (0);
}
