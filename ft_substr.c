/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:38:59 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/23 18:44:06 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	tot;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t) start >= s_len)
		return (ft_strdup(""));
	tot = s_len - start;
	if (tot > len)
		tot = len;
	ptr = malloc(tot + 1);
	if (ptr == NULL)
		return (NULL);
	if (tot > 0)
		ft_memcpy(ptr, s + start, tot);
	ptr[tot] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char	*g;

// 	g = ft_substr("hello", 1, 2);
// 	printf("[%s]\n", g);
// 	free(g);
// 	g = ft_substr("hello", 3, 10);
// 	printf("[%s]\n", g);
// 	free(g);
// 	g = ft_substr("hello", 2, 0);
// 	printf("[%s]\n", g);
// 	free(g);
// 	g = ft_substr("hello", 5, 2);
// 	printf("[%s]\n", g);
// 	free(g);
// 	g = ft_substr("", 0, 4);
// 	printf("[%s]\n", g);
// 	free(g);
// 	g = ft_substr("hello", 8, 3);
// 	printf("[%s]\n", g);
// 	free(g);
// 	return (0);
// }
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	s_len;
// 	size_t	tot;
// 	char	*ptr;

// 	s_len = ft_strlen(s);
// 	if ((size_t) start >= s_len)
// 		tot = 0;
// 	else
// 		tot = s_len - start;
// 	if (tot > len)
// 		tot = len;
// 	if (s_len <= start)
// 		return (ft_strdup(""));
// 	ptr = malloc(tot + 1);
// 	if (ptr == NULL)
// 		return (NULL);
// 	i = 0;
// 	// while (i < len && s[j] != '\0')
// 	while (i < tot)
// 	{
// 		ptr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }
