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
	int			i;

	if (fd < 0)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	i = 0;
	while(buffer[i] != '\n')
	{
		if (bytes_read == 0 || buffer[i])
		{
			line = ft_buffdup(buffer, i);
			bytes_read = read(fd, buffer, BUFFER_SIZE);
		}
		else
		{
			i++;
			bytes_read--;
		}
	}
	return (NULL);
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
