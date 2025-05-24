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
		i++;
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
	while (str1[i])
	{
		str_cated[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		str_cated[i + j] = str2[j];
		j++;
	}
	str_cated[i + j] = '\0';
	return (str_cated);
}

int	ft_offset(char *buffer, char *line)
{
	char *ba_line;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (
}
/*
int	main(void)
{
	char  str[] = "this has a newline\n\0";
	char  str2[] = "this does not have a newline.\0";
	int i;
	int j;
	char	*new_string;

	i = ft_is_nl(str);
	j = ft_is_nl(str2);
	printf("STRING : %d\n", i);
	printf("STRING2 : %d\n", j);

	new_string = ft_strconcat(&str[0], &str2[0]);
	printf("CONCAT : %s", new_string);
	free(new_string);
	return (0);
}
*/
