#include<stdio.h>
#include<unistd.h>

int ft_atoi(const char *str)
{
	int a = 0;
	int res = 0;
	int nb = 1;
	while((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
		a++;
	if(str[a] == '-' || str[a] == '+')
	{
		if(str[a] == '-')
			nb = -1;
		a++;
	}
	while(str[a] >= 48 && str[a] <= 57)
	{
		res *= 10;
		res = res + str[a] - 48;
		a++;
	}
	return (res * nb);
}
int main()
{
	printf("%d", ft_atoi("-545"));
}
