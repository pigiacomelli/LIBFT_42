/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:48:59 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/20 14:11:01 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;
	char	*temp;

	i = 0;
	str = malloc(size * count);
	if (!str)
		return (NULL);
	temp = (char *)str;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (str);
}
