#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>

char *maths(char *str)
{
	int a = 0;
	char swp;
	while(str[a] != '\0')
	{
		int b = a + 1;
		while(str[b] != '\0')
		{
			if((str[a] > str[b]))
			{
			swp = str[a];
			str[a] = str[b];
			str[b] = swp;
			}
			b++;
		}
		a++;
	}
	return str;
}
int main()
{
	char x[100];
	char y[100];
	scanf("%s", x);
	scanf("%s", y);
 	maths(x);
	maths(y);
	int a = atoi(x);
	int b = atoi(y);
	printf("%d", abs(a - b));
}
