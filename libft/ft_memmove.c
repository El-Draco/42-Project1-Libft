/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:21:55 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 19:24:17 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*new_src;
	char	*new_dest;
	size_t	i;

	new_src = (char *)src;
	new_dest = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (new_dest > new_src)
		while (n-- > 0)
			new_dest[n] = new_src[n];
	else
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (dst);
}
