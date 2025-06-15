/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:45:02 by hsari             #+#    #+#             */
/*   Updated: 2025/06/09 14:42:39 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	slen;

	//	size_t	i;
	slen = ft_strlen(s);
	dup = malloc(slen + 1);
	if (!dup)
		return (NULL);
	// i = -1;
	// while (s[++i])
	// dup[i] = s[i];
	ft_memcpy(dup, s, slen + 1);
	return (dup);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dst;
	char *src = "Hakan";

	dst = ft_strdup(src);
	printf("%s", dst);
}*/
