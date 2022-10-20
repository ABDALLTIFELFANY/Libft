/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:21:42 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/18 22:13:20 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"
#include<string.h>
// char f(unsigned int x, char c)
// {
//     unsigned int y = 0;
//     if(y < x)
//     {
//         c = c + 2;
//         y++;      
//     }
//     return c;
// }
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *hel;
    int y = 0;
    if (!s)
        return 0;
    hel = malloc(ft_strlen(s) * sizeof(char) + 1);
    if(!hel)
        return 0;
    while(s[y])
    {
        hel[y] = f(y, s[y]);
        y++;
    }
    hel[y] = 0;
    return hel;
}
// int main()
// {
//     char *str = "aaaaaa";
//     printf("%s", ft_strmapi(str,f)); 
// }