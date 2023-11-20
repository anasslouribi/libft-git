/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:02:16 by alouribi          #+#    #+#             */
/*   Updated: 2023/11/20 11:20:21 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}
/*int main()
{
    t_list *head = NULL;
    t_list *k1 = ft_lstnew("euef");
    head = k1;
    t_list *k2 = ft_lstnew("eutf");
    k1->next= k2;
    t_list *k3 = ft_lstnew("oooo");

    ft_lstadd_back(&head, k3);
    while (head != NULL)
    {
        printf("%s",head->content);
        head = head->next;
    }
}*/
