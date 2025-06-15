/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:11:26 by hsari             #+#    #+#             */
/*   Updated: 2025/06/11 04:08:58 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nsize(int n)
{
	int	res;

	res = 0;
	if (n <= 0)
	{
		res++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static void	ft_fill(int n, char *new)
{
	int	i;

	int isneg; // boolean loop for if negative is = 1, if not = 0
	i = ft_nsize(n);
	isneg = 0;
	if (n < 0)
	{
		n *= -1;
		// control sequence for the case where n < 0 for making it positive
		isneg = 1;
		// if the number is negative this will represent number is negative
	}
	new[i] = '\0';
	i--;
	while (i >= 0)
	{
		new[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (isneg)
		new[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*new;

	if (n == -2147483648)
		// new = ft_strdup("-2147483648");
		return (ft_strdup("-2147483648"));
	new = (char *)malloc(sizeof(char) * ft_nsize(n) + 1);
	if (!new)
		return (NULL);
	ft_fill(n, new);
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;

// 	a = 0;
// 	printf("%s", ft_itoa(a));
// }
