/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:09:22 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/08 10:52:57 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = s;
    while(n--)
        *ptr++ = 0;
}
int main()
{
    char x[10];
    ft_bzero(x,5);
    printf("%s", x);
}