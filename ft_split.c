/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 08:39:58 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/25 15:49:57 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char *str, char s)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] != s && (str[i + 1] == s || str[i + 1] == '\0'))
			c++;
		i++;
	}
	return (c);
}

static void	*ft_free(char **str, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	*to_move(char *s, int i, int l)
{
	char	*spl;

	spl = ft_calloc(l + 1, sizeof(char));
	if (!spl)
		return (0);
	spl = ft_memmove(spl, s + i, l);
	return (spl);
}

char	**ft_split2(char *s, int i, int x, char c)
{
	int		l;
	int		j;
	int		r;
	char	**spl;

	r = count_word((char *)s, c);
	spl = ft_calloc(sizeof(char *), r + 1);
	if (!spl)
		return (0);
	while ((s[i] != '\0' || s[j] != '\0') && x <= r + 1)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (s[i] == '\0')
			return (spl);
		spl[x] = to_move(s, i, (l = j - i));
		if (!(spl[x]))
			return (ft_free(spl, x));
		i = j;
		x++;
	}
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	return (ft_split2((char *)s, i, x, (unsigned char)c));
}
