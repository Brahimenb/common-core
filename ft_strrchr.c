/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:24:10 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/01 16:23:38 by benbiki          ###   ########.fr       */
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
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			dst = (char *)&s[i];
		}
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
	{
		return ((char *)&s[i]);
	}
	return (dst);
}
