/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:14:16 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/19 21:37:28 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t t)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	// if(str == 0)
	// 		return 0;
	while (a < t && str[a] != '\0')
	{
		b = 0;
		while (str[a + b] && str[a + b] == to_find[b] && a + b < t)
		{
			if (to_find[b + 1] == '\0')
				return ((char *)&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
// int main()
// {
//     // char *s = "hello mather fucker";
//     // char *y = "";
//    // printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
// 	printf("-----------\n");
// 	// char *s1 = "hello mather fucker";
//     // char *y1 = "";
//     printf("%s", strnstr(((void *)0), "fake", 3));
// }
