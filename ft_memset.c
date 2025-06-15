/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:44:24 by hsari             #+#    #+#             */
/*   Updated: 2025/06/08 22:19:24 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	arc[] = "Hakan, Memset, Ogreniyor";
// 	int		arr[] = {1,2,3};

/*/	1 759 666
	837382
	58973
in order to have negative of any number is two's compliment  + 1,
	+1 case is only applied to
first byte set. calculate the difference between in 8 bits (1 byte) 255-number
*/
	// ft_memset(arc, 's', 1);
	// ft_memset(arc+1, 'e', 1);
	// ft_memset(arc+2, 'x', 1);
	// ft_memset(arc+3, 101, 1);
	// printf("%s\n", arc);
	// ft_memset(arr, 254, 4);
	// ft_memset(arr, 239, 3);
	// ft_memset(arr, 253, 2);
	// ft_memset(&arr, 255, 4);
	// ft_memset(&arr, 255, 3);
	// ft_memset(&arr, 250, 2);
	// ft_memset(&arr, 83, 1); // 1 byte maximum value is 255 in binary
	// ft_memset(arr+1, 12, 3);
	// ft_memset(arr+1, 199, 2);
	// ft_memset(arr+1, 6, 1);
	// ft_memset(arr+2, 230, 2);
	// ft_memset(arr+2, 93, 1);
	//printf("%d\n",arr[0]); // arr
	//printf("%d\n", arr[1]);// arr+1
	//printf("%d\n", arr[2]);// arr+2
	//for (int i = 0; i < 3; i++)
	//	printf("%d\n", arr[i]);
	//printf("%c\n", arc[1]);
//}

