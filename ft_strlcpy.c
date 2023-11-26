/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:08:11 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/24 16:09:58 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < s)
		ft_memcpy((unsigned char *)dst, (unsigned char *)src, src_len + 1);
	else if (s != 0)
	{
		ft_memcpy((unsigned char *)dst, (unsigned char *)src, s - 1);
		dst[s - 1] = 0;
	}
	return (src_len);
}
