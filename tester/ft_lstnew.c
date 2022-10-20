#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *val)
{
    t_list *data = malloc(sizeof(t_list));
    t_list *hel = malloc(sizeof(t_list));
    hel -> content = val;
    hel -> next = NULL;
    return hel;
}
// int main()
// {
//     char *str = "hello";
//     printf("%s", ft_lstnew(str)->content);
// }
