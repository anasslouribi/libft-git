/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:53:07 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/20 13:55:40 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
}
// int main()
// {
//     t_list *h;
//     t_list *h1 = ft_lstnew("tyui");
//     t_list *h2 = ft_lstnew("ghj");
//     h = h1;
//     h1->next= h2;
//     ft_lstclear(&h);
// }
