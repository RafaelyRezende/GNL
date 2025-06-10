/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:32:19 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/05/14 10:33:22 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	flag;
	char	*res;

	if (argc != 2)
		return (1);
/*	
	while (true)
	{
		fd = open(argv[1], O_RDONLY);
		if ((res = get_next_line(fd)) == NULL)
			break ;
		printf("%s\n", res);
	}
	return (0);
	*/
	flag = 0;
	while (true)
	{
		printf("Option: ");
		scanf("%d", &flag);
		if (!flag)
			break ;
		fd = open(argv[1], O_RDONLY);
		res = get_next_line(fd);
		printf("%s\n", res);
	}
	return (0);
}
