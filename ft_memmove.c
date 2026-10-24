/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:39:47 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:50:32 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (const unsigned char *) src;
	if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_ptr[i] = src_ptr[i];
		}
	}
	return (dest);
}
// int	main(void)
// {
// 	char	a[] = "ABCDE";
// 	char	b[] = "ABCDE";
// 	char	c[] = "ABCDE";
// 	char	d[] = "ABCDE";

// 	ft_memmove(a + 1, a, 4);
// 	printf("Test 1: %s\n", a);
// 	ft_memmove(b, b + 1, 4);
// 	printf("Test 2: %s\n", b);
// 	ft_memmove(c, c, 6);
// 	printf("Test 3: %s\n", c);
// 	ft_memmove(d + 1, d, 0);
// 	printf("Test 4: %s\n", d);
// 	return (0);
// }
