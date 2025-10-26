/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:20:42 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/23 14:21:22 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			size;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	value = (unsigned char)value;
	size = 0;
	while (size < num)
	{
		*p = value;
		p++;
		size++;
	}
	return (ptr);
}
