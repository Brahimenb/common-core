/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:41:15 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/10 14:16:48 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, const char *digits)
{
	int	count;
	int	result;

	count = 0;
	if (n >= 16)
	{
		count = ft_puthex(n / 16, digits);
		if (count == -1)
			return (-1);
	}
	result = ft_putchar(digits[n % 16]);
	if (result == -1)
		return (-1);
	return (count + result);
}

int	ft_putptr(void *ptr)
{
	int			count;
	int			result;
	uintptr_t	n;
	const char	*smal;

	smal = "0123456789abcdef";
	if (!ptr)
		return (ft_string("(nil)"));
	count = ft_string("0x");
	if (count == -1)
		return (-1);
	n = (uintptr_t)ptr;
	result = ft_puthex((unsigned long long)n, smal);
	if (result == -1)
		return (-1);
	return (count + result);
}
