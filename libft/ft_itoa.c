/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:51:03 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/01 16:20:39 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long long nbr)
{
	size_t	count;

	count = 1;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*ft_fill(char *ptr, int n, size_t len)
{
	long long	nbr;

	nbr = n;
	if (nbr == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		ptr[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;

	len = ft_numlen((long long)n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr = ft_fill(ptr, n, len);
	ptr[len] = '\0';
	return (ptr);
}
