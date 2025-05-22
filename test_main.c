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
#include <stdio.h>

int	main(void)
{
  char  str[] = "this has a newline\n";
  char  str2[] = "this does not have a newline.";
  int i;
  int j;

  i = ft_is_nl(str);
  j = ft_is_nl(str2);
  printf("STRING : %d\n", i);
  printf("STRING2 : %d\n", j);

  return (0);
}
