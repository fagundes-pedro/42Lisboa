/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:23:21 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/17 14:36:13 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_erro(int size_base, char *base)
{
	int	i;

	i = 0;
	if (size_base <= 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == base[i + 1] || base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	size_base = str_len(base);
	if (check_erro(size_base, base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < size_base)
	{
		ft_putchar(base[nbr % size_base]);
		return ;
	}
	else
		ft_putnbr_base((nbr / size_base), base);
	ft_putnbr_base((nbr % size_base), base);
}
