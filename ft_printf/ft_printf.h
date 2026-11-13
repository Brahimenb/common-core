/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:44:46 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/12 14:41:18 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(const char *format, va_list args);

int	ft_putchar(char c);
int	ft_string(char *str);

int	ft_putnbr(int nbr);
int	ft_putnbr_digits(unsigned long n);

int	ft_puthex(unsigned long n, const char *digits);
int	ft_putptr(void *ptr);

#endif