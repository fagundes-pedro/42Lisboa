/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:55:59 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/21 22:11:22 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[argc - i][j] != '\0')
			j++;
		argv[argc - i][j] = '\n';
		write(1, argv[argc - i], (j + 1));
		i++;
		j = 0;
	}
	return (0);
}
