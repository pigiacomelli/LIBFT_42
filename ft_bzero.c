/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:22:56 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/23 14:22:58 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			count;

	value = 0;
	count = 0;
	p = (unsigned char *)s;
	while (count < n)
	{
		*p = value;
		p++;
		count++;
	}
}
