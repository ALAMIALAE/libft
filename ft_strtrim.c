/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:08:52 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/12 22:15:04 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new = (char *)malloc(end - start + 1);
	if (!new)
		return (NULL);
	while (end > start)
	{
		new[i] = s1[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
