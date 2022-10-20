#include<stdio.h>
#include<string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int x = 0;
    int a = 0;
    while(src[x] != '\0')
        x++;
    if(dstsize == 0)
    {
        if(x != 0)
            return x;
        return 0;
    }
    while(a < dstsize - 1 && a < x)
    {
        dst[a] = src[a];
        a++;
    }
    dst[a] = '\0';
    return x;
}
// int main()
// {
// 	char *str = "BBBB";
// 	char buff1[0xF00];
// 	char buff2[0xF00];
//     printf("%lu\n", sizeof(buff2));
//     printf("%zu\n",  ft_strlcpy(buff2, str, sizeof(buff2)));
//     printf("%s\n", buff2);
//     printf("---------\n");
//     char *str1 = "BBBB";
// 	char buff3[0xF00];
// 	char buff4[0xF00];
//     printf("%zu\n",   strlcpy(buff3, str1, sizeof(buff3)));
//     printf("%s\n", buff3);
// }