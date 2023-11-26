/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:41:14 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/26 18:12:56 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_num(unsigned long int num, int signe, int i)
{
	if (i >= 20 && signe > 0)
		return (-1);
	if (i >= 20 && signe < 0)
		return (0);
	if (num > LONG_MAX && signe > 0)
		return (-1);
	if (num > LONG_MAX && signe < 0)
		return (0);
	return ((int)num * signe);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					j;
	unsigned long int	num;
	int					signe;

	i = 0;
	num = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	j = i;
	while (str[j] >= '0' && str[j] <= '9')
	{
		num = num * 10 + str[j] - 48;
		j++;
	}
	return (long_num(num, signe, i));
}
