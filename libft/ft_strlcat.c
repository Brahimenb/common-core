/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:41:23 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/01 16:23:09 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ln_dst;
	size_t	ln_src;

	ln_dst = 0;
	while (ln_dst < size && dst[ln_dst] != '\0')
		ln_dst++;
	ln_src = ft_strlen(src);
	if (size == ln_dst)
		return (ln_src + size);
	i = ln_dst;
	j = 0;
	while (j < (size - i - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ln_dst + ln_src);
}
