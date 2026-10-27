/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: benbiki <benbiki@gmail.com>               #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 11:39:30 by benbiki          #+#    #+#              */
/*   Updated: 2026/10/27 12:00:03 by benbiki         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	len;

	if (!s || !f)
		return ;
	i = 0;
	len = strlen(s);
	while (i < len)
	{
		f((unsigned int) i, &s[i]);
		i++;
	}
}

static void	to_upper_test(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	s[] = "cat";

	printf("Before: %s\n", s);
	ft_striteri(s, to_upper_test);
	printf("After: %s\n", s);
	return (0);
}
