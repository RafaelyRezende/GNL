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

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	line = malloc(1);
	if (!line)
		return (NULL);
	*line = '\0';
	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE); // Copy to buffer and return the amount of bytes read
		if (ft_is_nl(buffer)) // Check if the buffer has a new line
		{
			ft_search_destroy(buffer, line, ft_is_nl(buffer));
			break;
		}
	}
	return (line);
}
/*
int main(int argc, char **argv)
{
	int	fd;
	int	flag;
	char	*res;

	flag = 1;
	fd = -1;
	if (argc != 2)
		return(1);

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error openning the file");
		return (1);
	}
	printf("FD of file %s: %d\n\n", argv[1], fd);
	while(1)
	{
		res = get_next_line(fd);
		if (!res)
			break;
		printf("OUT --> %s\n", res);
		scanf("OPTION (zero to exit): %d", &flag);
		if (flag == 0)
			break;
	}
	printf("Exiting...");
	return (0);
}
*/
