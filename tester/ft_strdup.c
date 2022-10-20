/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:16:04 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/17 12:11:53 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	int a = 0;
	char *cpy;
	int res = ft_strlen(s1) + 1;
	cpy = (char *)malloc(res * sizeof(char));
	if (!cpy)
		return 0;
	while(s1[a])
	{
		cpy[a] = s1[a];
		a++;
	}
	cpy[a] = '\0';
	return cpy;
}
// int main()
// {
// 	char str[] = "hello";
// 	printf("%s", ft_strdup(str));
// }
