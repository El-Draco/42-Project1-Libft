/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 00:38:20 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 19:58:42 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(int n, int fd)
{
	char	temp;

	if (n < 10)
	{
		temp = n + 48;
		write(fd, &temp, 1);
		return ;
	}
	putnbr(n / 10, fd);
	temp = n % 10 + 48;
	write(fd, &temp, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	putnbr(n, fd);
}
