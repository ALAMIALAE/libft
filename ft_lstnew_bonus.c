/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:45:02 by aben-dri          #+#    #+#             */
/*   Updated: 2024/12/16 06:18:27 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *node;
// 	char *content= "aouaa in rabat";
// 	node = ft_lstnew((void *) content);
// 	ft_putstr_fd((char *)node->content, 1);
	
// }