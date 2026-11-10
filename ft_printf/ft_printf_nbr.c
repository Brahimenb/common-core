/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:41:02 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/10 16:23:49 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_digits(unsigned long long n)
{
	int	result;
	int	count;

	count = 0;
	if (n > 9)
	{
		count = ft_putnbr_digits(n / 10);
		if (count == -1)
			return (-1);
	}
	result = ft_putchar(n % 10 + '0');
	if (result == -1)
		return (-1);
	return (count + result);
}

int	ft_putnbr(int nbr)
{
	long long	n;
	int			result;
	int			sign_count;

	n = nbr;
	sign_count = 0;
	if (n < 0)
	{
		result = ft_putchar('-');
		if (result == -1)
			return (-1);
		sign_count = result;
		n = -n;
	}
	result = ft_putnbr_digits(n);
	if (result == -1)
		return (-1);
	return (sign_count + result);
}
