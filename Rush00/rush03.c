/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaray <sbaray@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:39:03 by sbaray            #+#    #+#             */
/*   Updated: 2023/09/02 12:57:27 by sbaray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(int x, int y, int i, int j);

void	rush03(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x < 0 || y < 0)
	{
		write(1, "error, x or y is less than 0", 28);
		return ;
	}
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_char(y, x, i, j);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	print_char(int x, int y, int i, int j)
{
	if (i == 0 && (j == 0 || j == x - 1))
	{
		write(1, "A", 1);
	}
	else if (i == y - 1 && (j == 0 || j == x - 1))
	{
		write(1, "C", 1);
	}
	else if ((j == 0 || j == x - 1) || (i == 0 || i == y - 1))
	{
		write(1, "B", 1);
	}
	else 
	{
		write(1, " ", 1);
	}
}
