/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:22:22 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/20 11:52:20 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	old_j;
	size_t	s;

	s = dstsize;
	if (s == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	old_j = ft_strlen(dst);
	i = 0;
	if (j > s)
		return (s + (ft_strlen(src)));
	while (j < (s - 1) && src[i] != '\0' && (s - j - 1) > 0)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (old_j + ft_strlen(src));
}
