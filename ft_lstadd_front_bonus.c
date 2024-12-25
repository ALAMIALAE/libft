/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:58:40 by aben-dri          #+#    #+#             */
/*   Updated: 2024/12/16 06:43:52 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
#include <stdio.h>
int main(void)
{
	t_list *head = ft_lstnew("dos");
	t_list *new_node = ft_lstnew("tres");
	
	ft_lstadd_front(&head, new_node);
	
	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *) current->content);
		current = current->next;
	}
}