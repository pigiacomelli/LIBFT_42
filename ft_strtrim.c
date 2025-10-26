/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:37:17 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/23 15:44:56 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inside(char const s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (s == set[i++])
			return (1);
	return (0);
}

size_t	find_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && inside(s1[start], set))
		start++;
	return (start);
}

size_t	find_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (end > start && inside(s1[end], set))
		end--;
	return (end);
}

char	*empty_string(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*str;

	start = find_start(s1, set);
	if (!s1 || !set)
		return (NULL);
	if (s1[start] == '\0')
		return (empty_string());
	end = find_end(s1, set, start);
	len = end - start + 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
