/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:10:53 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/15 14:33:22 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest_ptr;
    const unsigned char *src_ptr;
    size_t i;

    dest_ptr = (unsigned char *)dest;
    src_ptr = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>

int main(void)
{
    char src[4] = {'A', '\0', 'C', 'D'};
    char dest[4] = {'x', 'x', 'x', 'x'};
    size_t i;

    ft_memcpy(dest, src, 4);

    i = 0;
    while (i < 4)
    {
        printf("%c ", (unsigned char)dest[i]);
        i++;
    }
    printf("\n");
    return (0);
}