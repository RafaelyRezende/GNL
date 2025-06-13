/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:32:19 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/13 16:12:21 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

int	ft_unit_test(void)
{
//char	file_test[] = "full_file.txt";
	char	file_test_2[] = "no_nl.txt";
	int	fd;
	char	*tmp;

	fd = open(file_test_2, O_RDONLY);
	tmp = get_next_line(fd);
	if (fd == -1)
	{
		printf("Error reading file");
		return (-1);
	}
	printf("%s\n", tmp);
	free(tmp);
	return (0);
}

int	main(void)
{
	int	status;

	status = ft_unit_test();
	return (status);
}
