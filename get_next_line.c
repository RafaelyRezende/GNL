/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:22:08 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/05/11 15:43:40 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_create_line(void)
{
	char	*str;

	str = (char *) malloc(sizeof(char));
	if (!str)
		return (FALSE);
	return (str);
}
// "oi\nola"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_create_line();
	if (!line)
		return (NULL);
	bytes_read = 1;
	while (bytes_read && !ft_is_nl(buffer))
	{
		if (!buffer[0])
			bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(line), NULL);
		if (bytes_read == 0)
			break ;
		line = ft_strconcat(line, buffer);
	}
	ft_offset(buffer);
	return (line);
}
