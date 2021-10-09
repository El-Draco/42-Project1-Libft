/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 22:57:36 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 16:11:24 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*temp;

	if (!s)
		return (NULL);
	temp = ft_strdup(s);
	if (!temp)
		return (temp);
	i = 0;
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = 0;
	return (temp);
}
