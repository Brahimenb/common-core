/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:15:52 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:50:54 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			return ((char *) & s[i]);
		}
		i++;
	}
	if ((unsigned char) c == (unsigned char) s[i])
	{
		return ((char *) & s[i]);
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	s[] = "BANANA";
// 	char	*result;

// 	result = ft_strchr(s, 'A');
// 	if (result != NULL)
// 	{
// 		printf("Returned string: %s\n", result);
// 		printf("Returned address: %p\n", (void *) result);
// 		printf("Index: %td\n", result - s);
// 	}
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }
