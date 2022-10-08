/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:24:29 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/07 10:33:33 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char *ft_strchr(const char *str, int c)
{
	int a = 0;
	int b = 0;
	while (str[b])
		b++;
	while(b >= 0)
	{
		if(str[b] == c)
		{
			a = b;
			return ((char *)&str[a]);
		}
		b--;
	}
	return 0;
}
int main()
{
    char *s = "heggggllo";
    char b = 'g';
    printf("%s", ft_strchr(s,b));
}
