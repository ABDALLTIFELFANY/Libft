/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:24:29 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/14 12:05:22 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *str, int c)
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