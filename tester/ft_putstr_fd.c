/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:22:58 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/19 21:40:25 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return ;
    int x = 0;
    while(s[x])
    {
        ft_putchar_fd(s[x], fd);
        x++;
    }
}