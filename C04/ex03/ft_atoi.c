/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:57:39 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/16 22:22:01 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_even(char *str)
{
	int	i;
	int	signal;

	i = 0;
	signal = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			signal++;
		i++;
	}
	if ((signal % 2) == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result += str[i] - '0';
			result *= 10;
		}
		if (result > 0 && (str[i] < '0' || str[i] > '9'))
			break ;
		i++;
	}
	result = result / 10;
	result *= is_even(str);
	return (result);
}
