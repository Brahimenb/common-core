/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putchar_fd.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: benbiki <benbiki@gmail.com>               #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 12:26:52 by benbiki          #+#    #+#              */
/*   Updated: 2026/10/27 12:39:26 by benbiki         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 2);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('Z', 0);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('n', 3);
	return (0);
}
