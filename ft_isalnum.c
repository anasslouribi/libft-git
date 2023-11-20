/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:21:27 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/01 14:17:20 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int h)
{
	if (ft_isalpha(h) || ft_isdigit(h))
		return (1);
	return (0);
}
/*int main()
{
	printf ("%d", ft_isalnum('s'));
}*/
