/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:22:08 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/05/07 21:31:26 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int	fd;
	char	buffer[256];
	int	reads;

	fd = open("test.txt", O_RDONLY | O_CREAT);

	while((reads = read(fd, buffer, 5)))
	{
		buffer[reads] = '\0';
		printf("buffer --> %s\n", buffer);
	}
}
