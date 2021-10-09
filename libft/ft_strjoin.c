/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:35:40 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 16:09:13 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*temp;
	int		l1;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	i = 0;
	temp = malloc(l1 + ft_strlen(s2) + 1);
	if (!temp)
		return (NULL);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		temp[l1 + i] = s2[i];
		i++;
	}
	temp[l1 + i] = 0;
	return (temp);
}
