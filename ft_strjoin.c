/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:34:15 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/23 18:46:59 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	tot1;
	size_t	tot2;

	if (!s1 || !s2)
		return (NULL);
	tot1 = ft_strlen(s1);
	tot2 = ft_strlen(s2);
	ptr = malloc(tot1 + tot2 + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, tot1);
	ft_memcpy(ptr + tot1, s2, tot2);
	ptr[tot1 + tot2] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	str;

// 	str = ft_strjoin("Hello", " Word");
// 	pritnf("%s", str);
// }
