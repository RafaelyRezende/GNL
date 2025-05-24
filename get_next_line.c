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

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes_read;
	int			is_nl;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	bytes_read = 1;
	is_nl = FALSE;
	while (bytes_read)
	{
		if (!buffer[0])
			bytes_read = read(fd, buffer, BUFFER_SIZE); // Copy to buffer and return the amount of bytes read
		if (ft_is_nl(buffer)) // Check if the buffer has a new line
		{
			ft_offset(buffer, line);
			break;
		}
	}
	return (line);
}
