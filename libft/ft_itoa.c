/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:40:08 by mkhairou          #+#    #+#             */
/*   Updated: 2022/10/17 18:00:22 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizeint(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*a;
	long int	nb;
	int			ssize;

	nb = n;
	ssize = sizeint(nb);
	a = (char *)malloc(sizeof(char) * (ssize + 1));
	if (!a)
		return (NULL);
	if (nb == 0)
		a[0] = 0 + 48;
	if (nb < 0)
	{
		nb *= -1;
		a[0] = '-';
	}
	a[ssize] = '\0';
	while (nb > 0)
	{
		a[ssize - 1] = (nb % 10) + 48;
		nb = nb / 10;
		ssize--;
	}
	return (a);
}
