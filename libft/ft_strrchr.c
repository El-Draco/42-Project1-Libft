/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:23:33 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 16:12:35 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = -1;
	pos = -1;
	while (s[++i])
	{
		if (s[i] == (unsigned char)c)
			pos = i;
	}
	if (s[i] == (unsigned char)c)
		pos = i;
	if (pos == -1)
		return (NULL);
	return ((char *)(s + pos));
}
