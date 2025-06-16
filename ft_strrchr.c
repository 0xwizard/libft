/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:43:04 by hsari             #+#    #+#             */
/*   Updated: 2025/06/13 05:25:41 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*res;

	slen = ft_strlen(s);
	res = (char *)s;
	if ((unsigned char)c == '\0')
		return (&res[slen]);
	while (slen)
	{
		slen--;
		if (res[slen] == (unsigned char)c)
			return (&res[slen]);
	}
	return (NULL);
}
