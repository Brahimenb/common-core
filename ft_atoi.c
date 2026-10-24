/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:07:35 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/22 19:46:51 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			i;
	int			sing;

	i = 0;
	result = 0;
	sing = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sing = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sing);
}

// int	main(void)
// {
// 	// const char nbr[] = "-2147483648";
// 	// int i = ft_atoi(nbr);
// 	// printf("%d\n",i);
// 	printf("%d\n", ft_atoi("2147483648"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("-2147"));
// 	printf("%d\n", ft_atoi("+21474abcd"));
// 	printf("%d\n", ft_atoi("-+-2147483648"));
// }
