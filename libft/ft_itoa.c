/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:55:51 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 19:47:24 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	num_size(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		end;
	long	nb;

	nb = n;
	end = num_size(n);
	s = ft_calloc(1 + end, sizeof(char));
	if (!s)
		return (s);
	if (nb < 0)
	{
		nb *= -1;
		s[0] = '-';
	}
	if (nb == 0)
		s[0] = '0';
	s[end--] = 0;
	while (nb)
	{
		s[end--] = nb % 10 + 48;
		nb /= 10;
	}
	return (s);
}
