/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benbiki <benbiki@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:08:41 by benbiki           #+#    #+#             */
/*   Updated: 2026/11/19 19:26:37 by benbiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char *over[OPEN_MAX];
	char *buffer;
	char *line;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	over[fd] = read_from_fd(fd, over[fd], buffer);
	free(buffer);
	if (!over[fd] || !*over[fd])
	{
		over[fd] = free_over(over[fd]);
		return (NULL);
	}
	line = extract_line(over[fd]);
	if (!line || update_over(&over[fd], ft_strlen(line)) == -1)
	{
		free(line);
		over[fd] = free_over(over[fd]);
		return (NULL);
	}
	return (line);
}