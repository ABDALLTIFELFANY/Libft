/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:14:16 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/07 11:56:04 by abelfany         ###   ########.fr       */
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
	while (str[a] != '\0' && a <= t)
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return ((char *)&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
int main()
{
    char *s = "hello mather fucker";
    char *y = "";
    printf("%s\n", ft_strnstr(s,y,0));
	printf("-----------\n");
	char *s1 = "hello mather fucker";
    char *y1 = "";
    printf("%s", strnstr(s1,y1,0));
}
