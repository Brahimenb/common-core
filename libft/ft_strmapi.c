/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 08:49:51 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/01 16:23:24 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
