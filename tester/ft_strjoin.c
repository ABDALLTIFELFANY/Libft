/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:22:42 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/19 21:15:00 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int a;
    int x;

    a = 0;
    if(!s1 || !s2)
        return 0;
    char *join = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
    if(!join)
        return (0);
    while(s1[a]){
        join[a]= s1[a];
        a++;
    }
    x = 0;
    while(s2[x]){
        join[a] = s2[x];
        a++;
        x++;
    }
    join[a] = '\0';
    return join;
}
// int main()
// {
// 	char *s1 = "my favorite animal is";
// 	char *s2 = "123";
// 	//char *s3 = "the nyancat";
// 	//char *tmp = ft_strjoin(s1, s2);
// 	//char *res = ft_strjoin(tmp, s3);
//     printf("%s", ft_strjoin(s1, s2));
//    // printf("%s", ft_strjoin(tmp, s3));
// }