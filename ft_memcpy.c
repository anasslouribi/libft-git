/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:26 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/19 11:46:01 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d == (void *)0 && s == (void *)0)
		return (d);
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
    int b = -1337;
    int c = 56;
    memcpy(c, b, sizeof(b));
  }*/
