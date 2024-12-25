/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dri <aben-dri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:53:31 by aben-dri          #+#    #+#             */
/*   Updated: 2024/11/13 14:28:58 by aben-dri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tot_nbr_chr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	ll;

	ll = n;
	len = tot_nbr_chr(ll);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len--] = '\0';
	if (ll == 0)
		result[0] = '0';
	if (ll < 0)
	{
		result[0] = '-';
		ll *= -1;
	}
	while (ll > 0)
	{
		result[len--] = (ll % 10) + '0';
		ll = ll / 10;
	}
	return (result);
}
