/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiacome <pgiacome@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:30:43 by pgiacome          #+#    #+#             */
/*   Updated: 2025/10/23 14:31:43 by pgiacome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;
	long	nb;

	nb = n;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	s = (nb % 10) + '0';
	write(fd, &s, 1);
}
