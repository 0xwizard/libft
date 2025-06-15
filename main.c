#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	**str;
	t_list kurek;
	struct s_list ismet;
	t_list *new;
	new->content = "mahmut";
	kurek.content = "ismet";

	int a;
	a = 5;

	int *b;
	*b = 5;


	// char *s = ft_strdup("      Ahmet 10, Mahmut 20, Ismet 30");
	// ft_strtrim(s, ',');
	// int a = open("zazaza", O_CREAT | O_RDWR | O_TRUNC, 0777);
	// ft_putstr_fd("Ad : ", a);
	// ft_putendl_fd("Mehmet", a);
	// ft_putstr_fd("Yas : ", a);
	// ft_putnbr_fd(999, a);
	// ft_putchar_fd('\n', a);
	// close(a);s
	str = ft_split("\0aa\0bbb", '\0');
	printf("%d\n", ft_split(str, '\0'));
	// int i;
	//     i = 0;
	//     while (str[i])
	//     {
	//         printf("%s\n", str[i]);
	//         i++;
	//     }
}
