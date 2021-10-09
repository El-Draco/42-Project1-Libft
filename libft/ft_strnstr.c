/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:18:27 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 16:12:09 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr( const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	if (!*little)
		return ((char *)big);
	l_len = ft_strlen(little);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
			j++;
		if (j == l_len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
