/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:49:30 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/08 11:41:42 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int x = 0;
    while(x < len)
    {
        ((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
        x++;
    }
    return dst;
}
int main()
{
    char dst[20];
    char src[] = "hello world";
    printf("%s\n", ft_memmove(dst,src+2,5));
    printf("------------\n");
    char dst1[20];
    char src1[] = "hello world";
    printf("%s", memcpy(dst1,src1+2,5));
}