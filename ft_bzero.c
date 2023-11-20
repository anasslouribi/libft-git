/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:05 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/08 10:12:41 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
	{
		ft_memset(s, 0, n);
	}
}
/*int main() {
    char buffer[10];  // A character array of size 10
    ft_bzero(buffer, sizeof(buffer));
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c", buffer[i]);
    }
    return 0;
}*/
