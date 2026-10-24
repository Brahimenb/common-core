/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:01:39 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:50:13 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	a[] =
// 	{
// 		'A', 'B', 'C'
// 	};
// 	char	b[] =
// 	{
// 		'A', 'B', 'C'
// 	};
// 	char	c[] =
// 	{
// 		'A', 'D', 'C'
// 	};
// 	char	x[] =
// 	{
// 		'A', '\0', 'X'
// 	};
// 	char	y[] =
// 	{
// 		'A', '\0', 'Y'
// 	};
// 	printf("Test 6: %d\n", ft_memcmp(x, y, 2) == 0);
// 	printf("Test 7: %d\n", ft_memcmp(x, y, 3) < 0);
// 	printf("Test 1: %d\n", ft_memcmp(a, b, 3));
// 	printf("Test 2: %d\n", ft_memcmp(a, c, 3));
// 	printf("Test 3: %d\n", ft_memcmp(c, a, 3));
// 	printf("Test 4: %d\n", ft_memcmp(a, c, 1));
// 	printf("Test 5: %d\n", ft_memcmp(a, c, 0));
// 	return (0);
// }
