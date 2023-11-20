/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:33:49 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/19 17:06:33 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*swap_neg(char *dest, unsigned int src, int lent)
{
	int	i;

	i = lent - 1;
	dest[i] = '\0';
	i--;
	while (i > 0)
	{
		dest[i] = (src % 10) + 48;
		src /= 10;
		i--;
	}
	dest[i] = '-';
	return (dest);
}

char	*swap_pos(char *dest, int src, int lent)
{
	int	i;

	i = lent - 1;
	dest[i] = '\0';
	i--;
	while (i >= 0)
	{
		dest[i] = (src % 10) + 48;
		src /= 10;
		i--;
	}
	return (dest);
}

int	count_int(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa2(char *str, int n, unsigned int p, int l)
{
	if (p == 0)
	{
		str = malloc(sizeof(char) * l + 1);
		if (!str)
			return (0);
		str = swap_pos(str, n, l + 1);
	}
	else
	{
		str = malloc(sizeof(char) * l + 2);
		if (!str)
			return (0);
		str = swap_neg(str, p, l + 2);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	p;
	int				sign;
	int				l;

	sign = 0;
	p = 0;
	str = NULL;
	if (n < 0)
		p = n * -1;
	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (0);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	l = count_int(n);
	return (ft_itoa2(str, n, p, l));
}
