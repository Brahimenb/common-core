/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:53:08 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:50:57 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s) + 1;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strdup("hello");
// 	if (ptr == NULL)
// 		return (1);
// 	printf("Test 1: %s\n", ptr);
// 	free(ptr);
// 	ptr = ft_strdup("");
// 	if (ptr == NULL)
// 		return (1);
// 	printf("Test 2: \"%s\"\n", ptr);
// 	free(ptr);
// 	return (0);
// }
