/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:00:46 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/16 13:32:46 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int a = 0;
	int x;
	x = ft_strlen(str);
	while(a <= x)
	{
		if(str[a] == c && a <= x)
			return ((char *)&str[a]);
		a++;
	}
	return 0;
}
// int main()
// {
//     char *s = "abc\0tcd";
//     char b = '\0';
// 	if(b == 0){
// 		s += 1;
//     printf("%s", strchr(s,'\0'));
// 	}
// }
