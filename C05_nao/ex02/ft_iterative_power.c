/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:34:23 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/18 21:50:12 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (!(nb && power))
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
