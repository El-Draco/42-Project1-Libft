/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:42:46 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 18:42:53 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	white_space(char ch)
{
	if (ch == ' ')
		return (1);
	if (ch >= 9 && ch <= 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	min;

	min = 1;
	i = 0;
	num = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			min = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num *= 10;
		num += nptr[i] - 48;
		i++;
	}
	return (num * min);
}
