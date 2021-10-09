/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:08:44 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 16:25:39 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0 || (!((char *)src)))
		return (len);
	while (i < size - 1 && ((char *)src)[i])
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
