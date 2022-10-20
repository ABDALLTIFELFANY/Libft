/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:40:54 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/14 09:59:24 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *ft_alloc(int x, char c)
{
    char *str;
    if(c == '+')
    str = malloc(x * sizeof(char) + 1);
    if(c == '-')
    {
    str = malloc(x * sizeof(char) + 2);
    str[0] = '-';
    }
    return str;
}
char *re(char *str, int a, int x)
{
    int y = 0;
    int b = 0;
        if(x > 0)
    {
        str = ft_alloc(a,'+');
        a -= 1;
        b = -1;
    }
        if(x < 0){
        str = ft_alloc(a,'-');
        x *= -1;
        y += 1;
        }
    while(a > b)
    {
        str[a] = x % 10 + 48;
        x = x / 10;
        a--;
        y++;
    }
    str[y] = 0;
    return str;
}
char  *ft_itoa(int n)
{
    int x;
    int a;
    char *str;

    x = n;
    a = 0;
    if(n < 0)
        n = n * -1;
    while(n > 0)
    {
        n = n / 10;
        a++;
    }
    str = re(str,a,x);
    return str;
}
// +
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// char *ft_alloc(int x)
// {
//     char *str;
//     str = malloc(x * sizeof(char));
//     return str;
// }
// char  *ft_itoa(int n)
// {
//     int x = n;
//     char *str;
//     int a = 0;
//     int y = 0;
//     if(n < 0)
//         n = n * -1;
//     while(n > 0)
//     {
//         n = n / 10;
//         a++;
//     }
//     if(x > 0)
//     {
//     }
//     else{
//         str = malloc(a * sizeof(char) + 2);
//         str[0] = '-';
//         x *= -1;
//         a += 1;
//     }
//     y = a;
//     a = a - 1;
//     while(a >= 0)
//     {
//         str[a] = x % 10 + 48;
//         x = x / 10;
//         a--;
//     }
//     str[y] = 0;
//     return str;
// }
// int main()
// {
//     int x = 123;
//     printf("%s", ft_itoa(x));
// }

