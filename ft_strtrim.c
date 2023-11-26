/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:03:32 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/24 16:10:10 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char a, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*all_cases(int j, int l, char *s1, char *str)
{
	int	x;

	x = 0;
	if (x > j)
	{
		str[0] = '\0';
		return (str);
	}
	while (x < l)
	{
		str[x] = s1[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	l;
	int				i;
	int				j;
	int				x;

	i = 0;
	x = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] != '\0' && ft_check(s1[i], (char *)set) != 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && ft_check(s1[j], (char *)set) != 0)
		j--;
	if (j < 0)
		l = 0;
	else
		l = j - i + 1;
	str = (char *)malloc((l + 1) * sizeof(char));
	if (!str)
		return (0);
	str = all_cases(j, l, (char *)s1 + i, str);
	return (str);
}
