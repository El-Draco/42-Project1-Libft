/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:23:18 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 18:42:02 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_pos(char s, const char *cset)
{
	int	i;

	i = 0;
	while (cset[i])
	{
		if (s == cset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*i;
	int		len;
	char	*s;

	s = NULL;
	if (!s1)
		return (NULL);
	i = (char *)s1;
	while (c_pos(*i, set) == 1)
		i++;
	len = ft_strlen(s1) - 1;
	while (len >= 0 && c_pos(s1[len], set) == 1)
		len--;
	s = ft_substr(i, 0, (s1 + len) - i + 1);
	return (s);
}
