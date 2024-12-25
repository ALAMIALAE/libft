/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:41:48 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/13 11:55:30 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	size_t	i;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	join = (char *)malloc((x + y + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		join[x++] = s2[i++];
	join[x] = '\0';
	return (join);
}
