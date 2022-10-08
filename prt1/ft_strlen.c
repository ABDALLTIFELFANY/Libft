/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:08:30 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/06 14:16:44 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

size_t ft_strlen(const char *str)
{
    int x = 0;
    while(str[x])
        x++;
        return x;
}
int main()
{
    char *s = "hello";
    printf("%zu", ft_strlen(s));
}
