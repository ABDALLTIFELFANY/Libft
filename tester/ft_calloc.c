/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:07:08 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/19 17:45:12 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t a;
    char *cpy;
	
	a = count * size;
    cpy = malloc(a);
    if(!(cpy))
        return 0;
	ft_memset(cpy, 0,a);
    return cpy;
}
// int main()
// {
// 	char *s;
// 	s = ft_calloc(0, 1);
// 	printf("%s", s);
// }
