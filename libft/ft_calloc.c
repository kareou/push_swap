/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:38:30 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/15 10:05:52 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*pt;

	pt = (void *)malloc(count * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, count * size);
	return (pt);
}
