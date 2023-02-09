/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:32:52 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/15 11:42:13 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*a;
	int		count;

	count = 0;
	a = lst;
	while (a != NULL)
	{
		count++;
		a = a -> next;
	}
	return (count);
}
