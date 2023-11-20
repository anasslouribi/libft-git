/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:52:33 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/19 14:29:41 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main() {
    char buffer[10];  // A character array of size 10

    // Fill the buffer with a specific value (e.g., 0x42)
    ft_memset(buffer, -1337, sizeof(buffer));

    // Now, buffer contains 0x42
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d", buffer[i]);
    }
    return 0;
}*/
