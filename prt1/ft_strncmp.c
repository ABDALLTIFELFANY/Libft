/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:27:09 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/06 17:32:26 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int a = 0;
	while(s1[a] == s2[a] && a <= n)
		a++;
	return s1[a] - s2[a];
}
int main()
{
	char *s1 = "hello";
	char *s2 = "hello";
	printf("%d", ft_strncmp(s1,s2,5));
}
