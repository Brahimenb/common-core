/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:48:33 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:51:36 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
// int	main(void)
// {
// 	printf("Test 1: %d (expected 0)\n",
// 		ft_strncmp("abcd", "abcb", 3));
// 	printf("Test 2: %d (expected 2)\n",
// 		ft_strncmp("abcd", "abcb", 4));
// 	printf("Test 3: %d (expected 0)\n",
// 		ft_strncmp("abc", "xyz", 0));
// 	printf("Test 4: %d (expected -22)\n",
// 		ft_strncmp("abc", "axc", 3));
// 	printf("Test 5: %d (expected 0)\n",
// 		ft_strncmp("abc", "abd", 2));
// 	printf("Test 6: %d (expected -99)\n",
// 		ft_strncmp("ab", "abc", 5));
// 	return (0);
// }
