/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:26:31 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 18:44:57 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mystrlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (len >= strlen)
		len = strlen;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	if (start > strlen)
	{
		result[0] = '\0';
		return (result);
	}	
	result = ft_mystrlcpy(result, &s[start], len);
	return (result);
}
