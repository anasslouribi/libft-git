/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:15:31 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/24 13:48:28 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check(char *str)
{
	str = malloc(1);
	if (!str)
		return (0);
	str[0] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (check(str));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (len > 0 && start <= ft_strlen(s))
	{
		ft_memmove(str, s + start, len);
		str[len] = '\0';
	}
	else
		str[i] = '\0';
	return (str);
}
