/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:39:59 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/03 16:47:30 by sbaray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	select_char(int x, int y, int i, int j);

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
			select_char(x, y, i, j);
			j++;
		}
		ft_putchar("\n");
		i++;
	}
}

void	select_char(int x, int y, int i, int j)
{
	if (j == 0 || j == x - 1)
	{
		if (i == 0)
		{
			ft_putchar("A");
		}
		else if (i == y - 1)
		{
			ft_putchar("C");
		}
		else
		{
			ft_putchar("B");
		}
	}
	else if ((i == 0 || i == y - 1))
	{
		ft_putchar("B");
	}
	else
	{
		ft_putchar(" ");
	}
}
