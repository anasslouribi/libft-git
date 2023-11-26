/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:27:33 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/25 15:06:50 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srl;
	size_t	dsl;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
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
// int main()
// {
// 	char src[] = "fghjk";
// 	char des[1];
// 	printf("%zu", strlcat(des, src, 9));
// }