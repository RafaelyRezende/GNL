/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:56:13 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/05/11 14:43:48 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

char	*get_next_line(int fd);
int		ft_is_nl(char buffer[]);
void	ft_offset(char *buffer);
char	*ft_strconcat(char *str1, char *str2);
#endif
