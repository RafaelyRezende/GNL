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
#include <stdio.h>

int	ft_is_nl(char *buffer)
{
	int	i;
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (++i);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i] == '\n')
			break ;
	}
	return (i);
}

char	*ft_strconcat(char *str1, char *str2)
{
	char	*str_cated;
	int		i;
	int		j;

	str_cated = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str_cated)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i++])
		str_cated[i - 1] = str1[i - 1];
	i = 0;
	while (str2[j] && str2[j] == '\n')
	{
		str_cated[i + j] = str2[j];
		j++;
	}
	if (str2[j] == '\n')
	{
		str_cated[i + j] = '\n';
		j++;
	}
	str_cated[i + j] = '\0';
	return (str_cated);
}

void	ft_offset(char *buffer)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			flag++;
		i++;
		if (flag)
			buffer[j++] = buffer[i];
	}
}
