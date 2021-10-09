/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:46:48 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 18:13:19 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_words(const char *str, char charset)
{
	int				i;
	unsigned int	words;
	int				count;

	count = 0;
	i = 0;
	words = 0;
	while (str[i] != '\0' && charset == str[i])
		i++;
	while (str[i] != '\0')
	{
		if (charset != str[i] && count == 0)
		{
			words++;
			count = 1;
		}
		else if (charset == str[i])
			count = 0;
		i++;
	}
	return (words);
}

static char	**do_stuff(const char *s, char c, char **array)
{
	int	i;
	int	j;
	int	word;
	int	len;

	i = 0;
	j = 0;
	word = 0;
	len = num_of_words(s, c);
	while (word < len && i <= (int)ft_strlen(s))
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j])
				j++;
			array[word] = ft_substr(s + i, 0, j);
			if (!array[word++])
				return (NULL);
		}
		i += j + 1;
	}
	array[word] = 0;
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char			**array;
	int				word;
	int				i;
	int				j;

	word = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc((num_of_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (array);
	array = do_stuff(s, c, array);
	return (array);
}
