/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:02:47 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/26 13:12:40 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	l;
	int	i;

	if (!lst)
		return (0);
	l = ft_lstsize(lst);
	i = 0;
	while (i < l - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
