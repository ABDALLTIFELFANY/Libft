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
    while(a < dstsize - 1)
    {
        dst[a] = src[a];
        a++;
    }
    dst[a] = '\0';
    return x;
}
int main()
{
    char a[10] = "helllo";
    char x[10] = "123";
    printf("%zu\n",   ft_strlcpy(a,x,3));
    printf("%s\n", a);
    printf("---------\n");
    char a1[10] = "helllo";
    char x1[10] = "123";
    printf("%zu\n",   strlcpy(a1,x1,3));
    printf("%s\n", a1);
}