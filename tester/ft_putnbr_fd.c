/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:23:40 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/18 12:18:41 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    long int nb;

    nb = n;
    if(nb < 0)
    {
        nb *= -1;
        ft_putchar_fd('-',fd);
    }
    if(nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10) + 48, fd);
}