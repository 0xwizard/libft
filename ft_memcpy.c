/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 22:42:58 by hsari             #+#    #+#             */
/*   Updated: 2025/06/10 17:30:06 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new;
	unsigned char	*source;

	new = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!src && !dest)
		return (dest);
	while (n--)
		*new ++ = *source++;
	return (dest);
}
