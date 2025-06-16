/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:58:17 by hsari             #+#    #+#             */
/*   Updated: 2025/06/08 22:20:55 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (res[i])
	{
		if (res[i] == (unsigned char)c)
		{
			return (&res[i]);
		}
		i++;
	}
	if (res[i] == (unsigned char)c)
		return (&res[i]);
	return (NULL);
}
