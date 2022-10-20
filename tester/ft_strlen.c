/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:08:30 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/13 21:12:22 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

size_t ft_strlen(const char *str)
{
    int x = 0;
    while(str[x++]){}
    return x - 1;
}
// int main()
// {
//     char *s = "hello";
//     printf("%zu", ft_strlen(s));
// }
