/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:57:54 by hsari             #+#    #+#             */
/*   Updated: 2025/06/15 18:09:57 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			wcount++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wcount);
}

static void	ft_free(char **new)
{
	int	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
		i++;
	}
	free(new);
}

static char	**ft_fill(char const *s, char c, char **new)
{
	int	len;
	int	i;
	int	x;
	int	wc;

	wc = ft_wordcount(s, c);
	x = -1;
	i = 0;
	while (++x < wc)
	{
		while (s[i] == c)
			i++;
		len = 0;
		while (s[i + len] != c && s[i + len] != '\0')
			len++;
		new[x] = ft_substr(s, i, len);
		if (!new[x])
		{
			ft_free(new);
			return (NULL);
		}
		i += len;
		while (s[i] == c)
			i++;
	}
	return (new);
}

char	**ft_split(char const *s, char c)
{
	size_t	slen;
	char	**new;

	if (!s)
		return (NULL);
	slen = ft_wordcount(s, c);
	// if (!ft_wordcount(s,c))
	// 	return (NULL);
	new = ft_calloc(sizeof(char *), slen + 1);
	if (!new)
		return (NULL);
	if (!ft_fill(s, c, new))
		return (NULL);
	// new[slen + 1] = NULL;
	return (new);
}
