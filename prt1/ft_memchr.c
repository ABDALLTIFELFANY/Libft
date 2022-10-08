/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:37:02 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/07 14:45:43 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int a = 0;
	char *str = (char *)s;
	while(a < n)
	{
		if(str[a] == (unsigned char)c)
			return &str[a];
		a++;
	}
	return 0;
}
int main()
{
	char x[10] = "hel\nlo ma";
	char y = 'm';
	printf("%s\n", ft_memchr(x,y,1000));
	printf("-----------\n");
	char x1[10] = "hel\nlo ma";
	char y1= 'm';
	printf("%s\n", memchr(x1,y1,1000));
}
