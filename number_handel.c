/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_handel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:38:07 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/05 15:48:02 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*multi_join(char **a, int ac)
{
	char	*str;
	int		i;
	char	*tmp;

	i = 1;
	str = malloc(sizeof(char *) * (ac - 1));
	while (a[i])
	{
		tmp = str;
		str = ft_strjoin(str, a[i]);
		free(tmp);
		tmp = str;
		str = ft_strjoin(str, " ");
		free(tmp);
		i++;
	}
	return (str);
}

char	**number_handel(char **av, int ac)
{
	char	*tmp_num;
	char	**numbers;

	tmp_num = multi_join(av, ac);
	numbers = ft_split(tmp_num, ' ');
	free(tmp_num);
	return (numbers);
}

void	fill_stack(char **a, t_stacks *m_stack)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (a[j])
	{
		m_stack->a->array[i] = ft_atoi(a[j]);
		if (ft_atoi(a[j]) < INT_MIN || ft_atoi(a[j]) > INT_MAX)
		{
			free_all(m_stack, a, i, 1);
			write(2, "Error\n", 6);
			exit(1);
		}
		free(a[i]);
		m_stack->a->size++;
		j++;
		i++;
	}
}

int	numbers_len(char **a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}
