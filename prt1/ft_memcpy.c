/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:08:34 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/07 17:09:12 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    int a = 0;
    while(a < n)
    {
        ((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
        a++;
    }
    return dst;
}
int main()
{
	char y[10] = "hello ma";
	char x[10] = "gg";
	printf("%s\n", ft_memcpy(x,y,10));
	printf("-----------\n");
	char y1[10] = "hello ma";
	char x1[10] = "gg";
	printf("%s\n", memcpy(x1,y1,10));
}