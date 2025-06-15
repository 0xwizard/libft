/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:43:15 by hsari             #+#    #+#             */
/*   Updated: 2025/06/13 01:13:58 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	if (!s1 && !s2)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (--n && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *arr = "abcdefghij";
	char *arr2= "abcdefgxyz";
	//int arr[] = {1,2,3,4};
	//int arr2[] = {1,2,5,4};
	//char *arr = "hakan";
	//char *arr2 = "";
	printf("MINE : %d\n", ft_memcmp(arr, arr2, 9));
	printf("ORJ FNC : %d", memcmp(arr, arr2, 9));
}*/
