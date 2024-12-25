/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:04 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/13 12:35:57 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*srcc;

	dst = (char *)dest;
	srcc = (char *)src;
	if (dst > srcc)
	{
		while (n > 0)
		{
			dst[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dst, srcc, n);
	}
	return (dst);
}
