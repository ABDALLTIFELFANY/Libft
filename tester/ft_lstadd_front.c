/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:37 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/19 14:04:31 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main(){
    t_list *node = ft_lstnew("1");
    ft_lstadd_front(&node, ft_lstnew("0"));
    printf("%s", node->content);
    // void *new_list = "achraf dardour";
    // t_list *list = ft_lstnew(new_list);
    // printf("%p\n",&list->content);
    // printf("%p\n",list);
    
}