#include<stdio.h>
#include<unistd.h>

int ft_isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return 1;
	return 0;
}
// int main()
// {
// 	char x = 'f';
// 	printf("%d", ft_isdigit(x));
// }
