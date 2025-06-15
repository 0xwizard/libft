/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:37:04 by hsari             #+#    #+#             */
/*   Updated: 2025/06/08 22:20:30 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen) // if given value is lesser than destination length
		return (size + srclen);
	i = 0;
	if (size == 0)
		return (srclen);
	while (src[i] && (dstlen + i) < size - 1)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr[] = "sari";
	char dst[10] = "hakanhaka";
	printf("%ld", ft_strlcat(dst, arr, sizeof(dst)));
//	printf("ORJ : %ld", strlcat(dst, arr, 8));
}*/
