/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 18:49:09 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/24 13:40:14 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(const char *s1, const char *set)
// {
// 	size_t	start;
// 	size_t	end;
// 	if (!s1 || !set)
// 		return (NULL);

// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;
// 	end = ft_strlen(s1) - 1;
// 	while (s1[end] && ft_strchr(set, s1[end]))
// 		end--;
// 	return (ft_substr(s1, start, (end - start) + 1));
// }

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}

int	main(void)
{
	const char	*p;

	p = ft_strtrim("aabhelalobcc", "abc");
	printf("%s", p);
	return (0);
}
