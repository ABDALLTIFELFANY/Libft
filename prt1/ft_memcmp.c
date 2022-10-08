/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:17:59 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/08 09:18:48 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int x = 0;
    while(x < n && ((unsigned char *)s1)[x] == ((unsigned char *)s2)[x])
        x++;
    return ((unsigned char *)s1)[x] - ((unsigned char *)s2)[x];
}
int main()
{
    char *s1 = "hello mather";
    char *s2 = "hello mother";
    int x = ft_memcmp(s1,s2,9);
    int y = memcmp(s1,s2,9);
    printf("%d\n", x);
    printf("----------\n");
    printf("%d\n", y);
}