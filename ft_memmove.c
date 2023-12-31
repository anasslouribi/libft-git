/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:14:42 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/24 16:09:14 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sc;

	de = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!de && !sc)
		return (NULL);
	if (de > sc)
	{
		while (n > 0)
		{
			de[n - 1] = sc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(de, sc, n);
	return (dest);
}
