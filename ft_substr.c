/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:38:59 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/01 16:23:57 by benbiki          ###   ########.fr       */
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
	if ((size_t)start >= s_len)
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
