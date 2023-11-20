/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:27:33 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/20 13:46:26 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srl;
	size_t	dsl;

	if (dst == NULL && dstsize == 0)
		return (0);
	srl = ft_strlen(src);
	dsl = ft_strlen(dst);
	if (dsl >= dstsize)
		dsl = dstsize;
	if (dsl == dstsize)
		return (dstsize + srl);
	if (srl < dstsize - dsl)
		ft_memcpy(dst + dsl, src, srl + 1);
	else
	{
		ft_memcpy(dst + dsl, src, dstsize - dsl - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dsl + srl);
}
/*int main()
{
	char d[15] = "segd";
	char s[] = "csdggd";
  // printf("%lu\n%s\n", ft_strlcat(d, s, 15), d);
   printf("%lu\n%s", strlcat(d, s, 15), d);
	}*/
