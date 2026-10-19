/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:43:59 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/15 14:31:41 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char   *ptr;
    size_t i;
    
    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main(void)
{
    int x = 16909060;

    printf("Before: %d\n", x);
    printf("Size of int: %zu bytes\n", sizeof(x));

    ft_bzero(&x, 1);
    printf("After 1 byte: %d\n", x);

    x = 16909060;
    ft_bzero(&x, sizeof(x));
    printf("After all bytes: %d\n", x);

    return (0);
}