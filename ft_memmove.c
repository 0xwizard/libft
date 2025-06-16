/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 23:08:34 by hsari             #+#    #+#             */
/*   Updated: 2025/06/11 03:00:31 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function is helping to copy the src to dst while preventing
	loosing any items from the given array because when we trying to copy from
	starting to end with the memcpy function it's changing the actual value of the given array
	So this causes overlap
		/ loss from the data. That is why we are copying starting from end
	to beginning.

*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dst);
}

