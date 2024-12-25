/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:49:04 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/13 11:52:51 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	j;

	if (n == 0)
		return (ft_strlen(src));
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (n <= ld)
		return (n + ls);
	i = ld;
	j = 0;
	while (src[j] && i < n - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ld + ls);
}
