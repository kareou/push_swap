/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:18:53 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/15 11:29:26 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (lst == NULL || !del)
		return ;
	if (ft_lstsize(*lst) == 0)
		return ;
	a = *lst;
	while (a != NULL)
	{
		a = a->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
}
