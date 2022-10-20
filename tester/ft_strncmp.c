/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:27:09 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/16 13:31:47 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i = 0;
	unsigned char *a1 = (unsigned char *) s1;
	unsigned char *a2 = (unsigned char *) s2;
	while ((a1[i] || a2[i]) && i < n)
	{
		if (a1[i] > a2[i])
			return (1);
		else if (a1[i] < a2[i])
			return (-1);
		i++;
	}
	return (0);
}
// 	int main()
// 	{
// 	char *s1 = "omg1||||||||||||||||";
// 	char *s2 = "omg3";
// 	printf("%d", ft_strncmp(s1,s2,5));
// }
