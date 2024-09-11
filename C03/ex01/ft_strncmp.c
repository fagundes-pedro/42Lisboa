/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdos-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:39:23 by pdos-pra          #+#    #+#             */
/*   Updated: 2023/09/07 19:50:00 by pdos-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	size_s1;
	int	size_s2;
	int	i;

	size_s1 = 0;
	size_s2 = 0;
	i = 0;
	while (((s1[size_s1] != '\0') || (s2[size_s2] != '\0')) && i < n)
	{
		if (s1[size_s1] != '\0')
		{
			size_s1++;
		}
		if (s2[size_s2] != '\0')
		{
			size_s2++;
		}
		i++;
	}
	return (size_s1 - size_s2);
}
