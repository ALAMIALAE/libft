/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:41:44 by aben-dri          #+#    #+#             */
/*   Updated: 2024/12/16 08:01:04 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
#include <stdio.h>
int main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("node one");
	t_list *node2 = ft_lstnew("node dos");
	t_list *node3 = ft_lstnew("node tres");
	
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *) current->content);
		current = current->next;
	}

}