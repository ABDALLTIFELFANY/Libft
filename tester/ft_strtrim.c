/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:43:33 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/18 14:36:59 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "libft.h"


int	fs(const char *s, const char *set)
{
	int	a;
	int	x;

	a = 0;
	x = 0;
	while (set[a])
	{
		if (set[a] == s[x])
		{
			x++;
			a = -1;
		}
		a++;
	}
	return (x);
}

int	ls(const char *s, const char *set)
{
	int	a;
	int	x;

	a = 0;
	x = ft_strlen(s) - 1;
	while (set[a])
	{
		if (set[a] == s[x])
		{
			x--;
			a = -1;
		}
		a++;
	}
	return (x);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*sub;
	int		x;
	int		z;
	int		len;
	int		start;

	z = 0;
	x = 0;
	if(!s)
		return 0;
	len = ls(s, set) + 1;
	start = fs(s, set);
	if ((len - start) > 0)
	sub = malloc((len - start) + 1 * sizeof(char));
	if (!(sub))
		return (0);
	while (start < len)
		sub[x++] = s[start++];
	sub[x] = '\0';
	return (sub);
}
// int main()
// {
// 	char *str = "{}";
// 	char *sep = "123584697+-hdhp===";
// 	printf("%s", ft_strtrim(str,sep));
// }
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int	ft_strlen(const char *str)
// {
// 	int	x;

// 	x = 0;
// 	while (str[x])
// 		x++;
// 	return (x);
// }

// int	fs(const char *s, const char *set)
// {
// 	int	a;
// 	int	x;

// 	a = 0;
// 	x = 0;
// 	while (set[a])
// 	{
// 		if (set[a] == s[x])
// 		{
// 			x++;
// 			a = -1;
// 		}
// 		a++;
// 	}
// 	return (x);
// }

// int	ls(const char *s, const char *set)
// {
// 	int	a;
// 	int	x;

// 	a = 0;
// 	x = ft_strlen(s) - 1;
// 	while (set[a])
// 	{
// 		if (set[a] == s[x])
// 		{
// 			x--;
// 			a = -1;
// 		}
// 		a++;
// 	}
// 	return (x);
// }

// char	*ft_strtrim(char const *s, char const *set)
// {
// 	char	*sub;
// 	int		x;
// 	int		z;
// 	int		len;
// 	int		start;

// 	z = 0;
// 	x = 0;
// 	len = ls(s, set) + 1;
// 	start = fs(s, set);
// 	if ((len - start) > 0)
// 	sub = malloc((len - start) * sizeof(char));
// 	if (!(sub))
// 		return (0);
// 	while (start < len)
// 		sub[x++] = s[start++];
// 	sub[x] = '\0';
// 	return (sub);
// }
// int main()
// {
// 	char *str = "===6846845468468-+[*hello world mather]4368464+-549+-+hdph===";
// 	char *sep = "123584697+-hdhp===";
// 	printf("%s", ft_strtrim(str,sep));
// }
