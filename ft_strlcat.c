/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:27:31 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/26 16:49:28 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_d;
	size_t	size_s;
	size_t	j;
	size_t	i;

	j = 0;
	size_d = ft_strlen(dest);
	size_s = ft_strlen(src);
	i = size_d;
	if (size <= size_d)
		return (size + size_s);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (size_d + size_s);
}
