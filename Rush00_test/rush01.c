/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:39:59 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/02 16:22:43 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x < 0 || y < 0)
	{
		write(1, "error, x or y is less than 0\n", 28);
		return ;
	}
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar(x, y, i, j);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putchar(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (j > 0 && i > 0) && (i == y - 1 && j == x - 1))
	{
		write(1, "/", 1);
	}
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
	{
		write(1, "\\", 1);
	}
	else if ((j == 0 || j == x - 1) || (i == 0 || i == y - 1))
	{
		write(1, "*", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
