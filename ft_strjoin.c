/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:22:05 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/19 13:37:12 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1l;
	size_t	s2l;

	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (0);
	s2l = ft_strlen(s2);
	s1l = ft_strlen(s1);
	s3 = (char *)malloc(s1l + s2l + 1);
	if (!s3)
		return (NULL);
	if (s1 != NULL)
		ft_memcpy(s3, s1, s1l);
	if (s2 != NULL)
		ft_memcpy(s3 + s1l, s2, s2l);
	s3[s1l + s2l] = 0;
	return (s3);
}
