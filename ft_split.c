/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:36:57 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/23 14:37:50 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		p;

	i = 0;
	count = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] != c && p == 0)
		{
			p = 1;
			count++;
		}
		else if (s[i] == c)
			p = 0;
		i++;
	}
	return (count);
}

static void	free_split(char **array, size_t j)
{
	while (j > 0)
		free(array[--j]);
	free(array);
}

static int	sep_words(char **array, char const *s, char c)
{
	size_t		i;
	size_t		j;
	char const	*start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			start = &s[i];
			while (s[i] && s[i] != c)
				i++;
			array[j] = ft_substr(start, 0, &s[i] - start);
			if (!array[j])
				return (free_split(array, j), 0);
			j++;
		}
	}
	array[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!sep_words(array, s, c))
		return (NULL);
	return (array);
}
