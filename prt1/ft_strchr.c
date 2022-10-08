/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:00:46 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/07 10:23:53 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char *ft_strchr(const char *str, int c)
{
	int a = 0;
	while(str[a])
	{
		if(str[a] == c && str[a])
			return ((char *)&str[a]);
		a++;
	}
	return 0;
}
int main()
{
    char *s = "hello";
    char b = 'l';
    printf("%s", ft_strchr(s,b));
}
