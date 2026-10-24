/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:54:28 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:47:41 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = ft_calloc(4, sizeof(int));
// 	if (arr == NULL)
// 		return (1);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("arr[%d] = %d\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
