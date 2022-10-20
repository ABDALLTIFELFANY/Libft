/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:22:02 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/17 11:56:33 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"
// void f(unsigned int x,char *str)
// {
//     unsigned int y = 0;
//     if(y < x)
//     {
//         str[y] = str[y] + 2;
//         y++;      
//     }
// }
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int y = 0;
    if(!s)
        return;
    while(s[y])
    {
        f(y, &s[y]);
        y++;
    }
}
// int main()
// {
//     char str[] = "abcd";
//     ft_striteri(str,f);
//     printf("%s", str);
// }
