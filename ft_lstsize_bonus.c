/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:16:43 by aben-dri          #+#    #+#             */
/*   Updated: 2024/12/16 06:19:43 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list  *node1 = ft_lstnew("node1");
// 	t_list  *node2 = ft_lstnew("node2");
// 	t_list  *node3 = ft_lstnew("node3");
// 	t_list  *node4 = ft_lstnew("node4");
// 	t_list	*node5 = ft_lstnew("node5");

// 	node1->next=node2;
// 	node2->next=node3;
// 	node3->next=node4;
// 	node4->next=node5;
// 	node5->next=NULL;
// 	int size = ft_lstsize(node1);
// 	printf("%d\n", size);
// }