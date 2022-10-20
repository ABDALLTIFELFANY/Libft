/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:39:49 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/13 21:11:01 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = b;
    while(len--)
        *ptr++ = c;
    return b;
}
// int main() {
//     char hel[10];
//     ft_memset(hel, 'x', 10);
//     write(1, hel, 10);
//     printf("\n----------\n");
//     char hell[10];
//     write (1, memset(hell,'g',10), 10);
// }