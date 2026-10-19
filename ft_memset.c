/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: benbiki <benbiki@gmail.com>               #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 19:12:38 by benbiki          #+#    #+#              */
/*   Updated: 2026/10/18 20:28:43 by benbiki         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	int	x = 16909060;

	printf("Before: %d\n", x);
	ft_memset(&x, 1, 1);
	printf("After: %d\n", x);
	return (0);
}
