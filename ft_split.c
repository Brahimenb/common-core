/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:32:01 by benbiki           #+#    #+#             */
/*   Updated: 2026/10/25 21:13:17 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **res, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**split_fill(const char *s, char c, char **res, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
			return (ft_free(res, j));
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	char	**res;

	count = ft_count(s, c);
	res = malloc((count + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	return (split_fill(s, c, res, count));
}
////

// static size_t	ft_count(const char *s1, char c)
// {
// 	size_t	i;
// 	size_t	count;

// 	i = 0;
// 	count = 0;
// 	while (s1[i])
// 	{
// 		if (s1[i] != c && (i == 0 || s1[i - 1] == c))
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }

// static size_t	strlen_find(const char *s1, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] != c && s1[i])
// 		i++;
// 	return (i);
// }

// static char	**ft_free(char **res, size_t count)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < count)
// 	{
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (NULL);
// }

// static char	**split_fill(const char *s, char c, char **res, size_t count)
// {
// 	size_t	i;
// 	size_t	k;
// 	size_t	l;

// 	i = 0;
// 	k = 0;
// 	while (k < count)
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		l = strlen_find(s + i, c);
// 		res[k] = ft_substr(s, i, l);
// 		if (!res[k])
// 			return (ft_free(res, k));
// 		i += l;
// 		k++;
// 	}
// 	res[k] = NULL;
// 	return (res);
// }

// char	**ft_split(const char *s, char c)
// {
// 	size_t	count;
// 	char	**res;

// 	if (!s)
// 		return (NULL);
// 	count = ft_count(s, c);
// 	res = malloc((count + 1) * sizeof(*res));
// 	if (!res)
// 		return (NULL);
// 	return (split_fill(s, c, res, count));
// }
// /////" brahim  zama kani "
// //////////////////////////////////////////////////////////////
