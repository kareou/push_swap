/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:39:13 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/19 18:27:29 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*a;
	char		*b;

	i = 0;
	a = (char *)haystack;
	b = (char *)needle;
	if (*b == '\0')
		return (a);
	if (len == '\0')
		return (NULL);
	while (a[i] != '\0' && i < len)
	{
		j = 0;
		while (b[j] == a[i + j] && (i + j) < len)
		{
			j++;
			if (b[j] == '\0')
				return (&a[i]);
		}
		i++;
	}
	return (NULL);
}
