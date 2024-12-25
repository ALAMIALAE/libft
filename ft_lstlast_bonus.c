/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:23:53 by aben-dri          #+#    #+#             */
/*   Updated: 2024/12/16 06:19:37 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// #include <stdio.h>
// int main(void)
// {
//    t_list *node1 = ft_lstnew("uno");
//    t_list *node2 = ft_lstnew("dos");
//    t_list *node3 = ft_lstnew("tres");

//    node1->next = node2;
//    node2->next = node3;
   
//    t_list *last = ft_lstlast(node1);
//    printf("%s", (char *)last->content);
// }