/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:40:46 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/10 14:15:36 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	result;

	result = write(1, &c, 1);
	if (result != 1)
		return (-1);
	return (result);
}

int	ft_string(char *str)
{
	int	result;
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		result = ft_putchar(str[i]);
		if (result == -1)
			return (-1);
		i++;
	}
	return (i);
}
