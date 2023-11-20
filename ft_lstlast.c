/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:02:47 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/19 12:37:43 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	l;
	int	i;

	l = ft_lstsize(lst);
	i = 0;
	while (i < l - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
/*int main()
{
    void *com ="gfdhjk";
    t_list *head = NULL;
    t_list *k1 = ft_lstnew("fghjk");
    
    head = k1;
    
    t_list *k2 = ft_lstnew("fqqqqqqk");
    
    k1->next=k2;
    t_list *res = ft_lstlast(head);
    printf("%s\n",  (char *)res->content);
}*/
