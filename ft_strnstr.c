/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:03:07 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:52:20 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return (((char *) & big[i]));
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	*res;

// 	res = ft_strnstr("ABCD EF", "EF", 7);
// 	printf("Test 1: %s (expected EF)\n",
// 		res != NULL ? res : "NULL");
// 	res = ft_strnstr("ABCDEF", "CDEF", 3);
// 	printf("Test 2: %s (expected NULL)\n",
// 		res != NULL ? res : "NULL");
// 	res = ft_strnstr("abc", "a", 0);
// 	printf("Test 3: %s (expected NULL)\n",
// 		res != NULL ? res : "NULL");
// 	res = ft_strnstr("abc", "", 0);
// 	printf("Test 4: %s (expected abc)\n",
// 		res != NULL ? res : "NULL");
// 	res = ft_strnstr("ababa", "ba", 5);
// 	printf("Test 5: %s (expected baba)\n",
// 		res != NULL ? res : "NULL");
// 	return (0);
// }
