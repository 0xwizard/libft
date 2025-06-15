/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:35:43 by hsari             #+#    #+#             */
/*   Updated: 2025/06/10 19:38:28 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		*str++ = '\0';
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {1,2,3,4};
	int	i;
	ft_bzero(arr, 16);
//	for (int i = 0; i < 4; i++)
//		printf("%d\n", arr[i]);

	i = 0;
	while (i < 4)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}*/
