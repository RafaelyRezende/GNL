/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:22:08 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/12 16:09:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_is_nl(char *buff)
{
	int	i;

	i = 0;
	while (*buff)
	{
		if (*buff == '\n')
			return (++i);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	return (i);
}

int	ft_init(char *line, int *bytes_read)
{
	line = malloc(1);
	if (!line)
		return (NULL);
	*line = '\0';
	*bytes_read = 1;
	return (1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	unsigned int	len;
	char		*ptr_start;

	len = ft_strlen(s2) + ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	ptr_start = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (ptr_start);
}

void	ft_offset(char *buff)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	j = 0;

	while (buff[i])
	{
		if (buff[i] == '\n')
			flag++;
		if (flag)
		{
			buff[j] = buff[++i];
			j++;
		}
		else
			i++;
	}
	return (buff);
}
char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || !ft_init(line, &bytes_read))
		return (NULL);
	line = ft_strjoin(line, buffer);
	if (!line)
		return (NULL);
	while (bytes_read && !ft_is_nl(buffer[0]))
	{
		if (!buffer[0])
			bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1 || (bytes_read == 0 && !*line))
			return (free(line), NULL);
		line = ft_strjoin(line, buffer);
		if (!line)
			return (NULL);
	}
	ft_offset(buffer);
	return (line);
}
