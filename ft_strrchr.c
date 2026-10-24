/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:24:10 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:52:28 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dst;
	size_t	i;

	dst = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			dst = (char *) & s[i];
		}
		i++;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
	{
		return ((char *) & s[i]);
	}
	return (dst);
}
// int	main(void)
// {
// 	char	s[] = "BANANA";
// 	char	*result;

// 	result = ft_strrchr(s, 'A');
// 	printf("%td\n", result - s);
// 	// Expected: 5
// 	result = ft_strrchr(s, 'Z');
// 	printf("%p\n", (void *) result);
// 	// Expected: (nil) or equivalent
// 	result = ft_strrchr(s, '\0');
// 	printf("%td\n", result - s);
// 	// Expected: 6
// }
