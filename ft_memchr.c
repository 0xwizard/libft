/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 14:15:47 by hsari             #+#    #+#             */
/*   Updated: 2025/06/13 01:39:00 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int arr[5] = {1,2,3,4,5};
	//char *ptr = "Hakan";
	ft_memchr(arr, 3, 16);
	printf("ORJ FNC: %p\n", memchr(arr, 3, 16));
	for (int i=0; i < 5; i++)
		printf("%i %p\n", arr[i], arr+i);
}*/
