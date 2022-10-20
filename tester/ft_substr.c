/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:38:50 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/18 14:31:05 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// int ft_strlen(const char *str)
// {
//     int x = 0;
//     while(str[x])
//     x++;
//     return x;
// }
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    int     x;
    
    x = 0;
    if(!s)
        return 0;
    int z = ft_strlen(s);
    if(start >= z)
    {
        sub = malloc(1 * sizeof(char));
        sub[0] = 0;
        return sub;
    }
    sub = malloc(len + 1 * sizeof(char));
        if(!sub)
            return 0;
    while(x < len && s[start])
    {
        sub[x] = s[start];
        start++;
        x++;
    }
    sub[x] = '\0';
    return sub;
}
// int main()
// {
// 	char *str = "i just want this part #############";
// 	size_t n = 10;
// 	int m = 0;
// 	char *dest = ft_substr(str, m, n);
// 	printf("%s\n", dest);
// }