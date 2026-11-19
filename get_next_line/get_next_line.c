/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:57:04 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/19 19:42:31 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*free_over(char *over)
{
	free(over);
	return (NULL);
}

static int	update_over(char **over, size_t line_len)
{
	char	*remainder;

	if (ft_strlen(*over) > line_len)
	{
		remainder = ft_strdup(*over + line_len);
		if (!remainder)
			return (-1);
		free(*over);
		*over = remainder;
	}
	else
		*over = free_over(*over);
	return (0);
}

static char	*extract_line(char *over)
{
	char	*newline;
	char	*line;
	size_t	len;
	size_t	i;

	newline = ft_strchr(over, '\n');
	len = ft_strlen(over);
	if (newline)
		len = (size_t)(newline - over) + 1;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = over[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*read_from_fd(int fd, char *over, char *buffer)
{
	ssize_t	bytes_read;
	char	*temp;

	if (!over)
		over = ft_strdup("");
	if (!over)
		return (NULL);
	bytes_read = 0;
	while (!ft_strchr(over, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(over, buffer);
		if (!temp)
			return (free_over(over));
		free(over);
		over = temp;
	}
	if (bytes_read < 0)
		return (free_over(over));
	return (over);
}

char	*get_next_line(int fd)
{
	static char	*over;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	over = read_from_fd(fd, over, buffer);
	free(buffer);
	if (!over || !*over)
	{
		over = free_over(over);
		return (NULL);
	}
	line = extract_line(over);
	if (!line || update_over(&over, ft_strlen(line)) == -1)
	{
		free(line);
		over = free_over(over);
		return (NULL);
	}
	return (line);
}
