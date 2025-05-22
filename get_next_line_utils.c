/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:27:44 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/05/14 10:30:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_is_nl(char buffer[])
{
	int	i;
	 // Return: a positive number (position of new line) if buffer has a nl or zero
	 // Param: copy of the contents of the buffer
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (++i);
		i++;
	}
	return (0);
}
/*
void	ft_search_destroy(char buffer[], char *line, int bytes2nl)
{
	
}
*/
