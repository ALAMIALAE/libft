/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:02:08 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/12 22:08:37 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;
	size_t	x;
	size_t	j;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s || len == 0)
		return (ft_strdup(""));
	if (len_s < start + len)
		len = len_s - start;
	sub = (char *)malloc((len + 1));
	if (!sub)
		return (NULL);
	j = start;
	x = 0;
	while (x < len)
	{
		sub[x] = s[j];
		j++;
		x++;
	}
	sub[x] = '\0';
	return (sub);
}
