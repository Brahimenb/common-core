/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:00:07 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/15 17:38:22 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    size_t i;

    ptr = (const unsigned char *)s;
    i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c )
        {
            return ((void *)(ptr + i));
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main(void)
{
    // char data[] = {'A', '\0', 'C', 'D'};

    // printf("%d\n", ft_memchr(data, 'C', 4) == &data[2]);
    // printf("%d\n", ft_memchr(data, 'C', 2) == NULL);
    // printf("%d\n", ft_memchr(data, 'A', 4) == &data[0]);

    // if (ft_memchr(data, 'C', 4) == &data[3])
    //     printf("PASS\n");
    // else
    //     printf("FAIL\n");

    char data[] = {'A', '\0', 'C', 'D'};
    char word[] = "banana";

    printf("Test 1: %d\n",
        ft_memchr(data, '\0', 4) == &data[1]);

    printf("Test 2: %d\n",
        ft_memchr(data, 'Z', 4) == NULL);

    printf("Test 3: %d\n",
        ft_memchr(data, 'A', 0) == NULL);

    printf("Test 4: %d\n",
        ft_memchr(word, 'a', 6) == &word[1]);

    printf("Test 5: %d\n",
        ft_memchr(word, 'n', 6) == &word[2]);

    return (0);
}
