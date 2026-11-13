/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:40:30 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/12 14:53:33 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(char specifier, va_list args)
{
	const char	*smal = "0123456789abcdef";
	const char	*large = "0123456789ABCDEF";

	if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (specifier == 'x')
		return (ft_puthex(va_arg(args, unsigned int), smal));
	if (specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), large));
	if (specifier == 'u')
		return (ft_putnbr_digits(va_arg(args, unsigned int)));
	if (specifier == '%')
		return (ft_putchar('%'));
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (ft_string(va_arg(args, char *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	return (-1);
}

int	ft_format(const char *format, va_list args)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			result = ft_handle(format[i + 1], args);
			i += 2;
		}
		else
			result = ft_putchar(format[i++]);
		if (result == -1)
			return (-1);
		count += result;
	}
	return (count);
}
