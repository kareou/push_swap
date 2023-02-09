/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:21:45 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/15 15:32:10 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*a;
	unsigned char		*b;
	size_t				i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((a[i] != '\0' && b[i] != '\0') && n > i)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	if (i < n)
		return (a[i] - b[i]);
	return (0);
}
