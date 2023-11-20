/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:00:30 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/20 11:16:15 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nr;

	nr = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		nr = n * (-1);
	}
	if (nr > 9)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putnbr_fd(nr % 10, fd);
	}
	if (nr <= 9 && nr >= 0)
	{
		nr += '0';
		write(fd, &nr, 1);
	}
}
