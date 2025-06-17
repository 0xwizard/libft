/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:24 by hsari             #+#    #+#             */
/*   Updated: 2025/06/17 20:43:13 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_worker *create(char *name, char *surname, int age)
{
	t_worker *create = malloc(sizeof(t_worker));
	create->name = ft_strdup(name);
	create->surname = ft_strdup(surname);
	create->age = age;
	return (create);
}
void	ftdel(void *content)
{
	t_worker *content2 = (t_worker *)content;
	free(content2->name);
	free(content2->surname);
	free(content2);
}
char	atoupper(unsigned int i, char c)
{	
	(void)i;
	while(c >= 'a' && c <= 'z')
		c -= 32;
}

int	main(void)
{
	t_worker	*berk;
	t_worker	*hakan;
	t_worker	*hasan;

	//berk->name = ft_strdup("Berk");
	//berk->surname = ft_strdup("Eldemir");
	//berk->age = 42;


	//hakan->name = "Hakan";
	//hakan->surname = "Sari";
	//hakan->age = 32;
	

	//hasan->name = "Hasan";
	//hasan->surname = "Sari";
	//hasan->age = 33;	
	
	t_list *head = ft_lstnew(create("Berk", "Eldemir", 42));
	
//	ft_lstadd_back(&head, ft_lstnew(create("Hakan", "Sari", 32)));
	//ft_lstadd_back(&head, ft_lstnew(create("Hasan", "Sabbah", 45)));
	//t_worker *ismet = (t_worker *)head->next->next->content;
//	printf("%s\n", (char *)ismet->name);
//	ft_lstclear(&head, ftdel);
	ft_lstadd_back(NULL, head);
	
	// char	**str;:w

	// t_list kurek;
	// struct s_list ismet;
	// t_list *new;
	// new->content = "mahmut";
	// kurek.content = "ismet";

	// int a;
	// a = 5;

	// int *b;
	// *b = 5;
	//char *ptr = ft_strmapi("Hakan", atoupper);
	//printf("%s\n", ptr);
	//free(ptr);


	// char *s = ft_strdup("      Ahmet 10, Mahmut 20, Ismet 30");
	// ft_strtrim(s, ',');
	//int a = open("zzzz", O_CREAT | O_RDWR | O_TRUNC, 4777);
	// ft_putstr_fd("Ad : ", a);
	// ft_putendl_fd("Mehmet", a);
	// ft_putstr_fd("Yas : ", a);
	// ft_putnbr_fd(999, a);
	// ft_putchar_fd('\n', a);
	// close(a);s
	// str = ft_split("\0aa\0bbb", '\0');
	// printf("%d\n", ft_split(str, '\0'));
	// int i;
	//     i = 0;
	//     while (str[i])
	//     {
	//         printf("%s\n", str[i]);
	//         i++;
	//     }
}
