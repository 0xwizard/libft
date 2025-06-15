/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:52:53 by hsari             #+#    #+#             */
/*   Updated: 2025/06/13 01:42:38 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tlen;
	char	*new;

	tlen = ft_strlen(s);
	if (!len || !s || start >= tlen)
		return (ft_strdup(""));
	if (tlen - start < len)
		len = tlen - start;
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, &s[start], len);
	new[len] = '\0';
	return (new);
}
