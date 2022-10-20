// #include <stdlib.h>
// #include <stdio.h>

// char	*ft_findchr(const char *str, int c)
// {
// 	int	a;

// 	a = 0;
// 	while (str[a])
// 	{
// 		if (str[a] != c && str[a])
// 			return ((char *)&str[a]);
// 		a++;
// 	}
// 	return (0);
// }

// int	countlen(const char *str, char c)
// {
// 	int	x;

// 	x = 0;
// 	str = ft_findchr(str, c);
// 	while (str[x] != c && str[x])
// 	{
// 		x++;
// 	}
// 	return (x + 1);
// }

// char	**tab1(const char *s, int size, char c)
// {
// 	char	**tab;
// 	int		a;
// 	int		y;
// 	int		l;

// 	a = 0;
// 	y = 0;
// 	l = 0;
// 	tab = malloc((size + 1) * sizeof(char *));
// 	while (a < size)
// 	{
// 		s = ft_findchr((&s[l]), c);
// 		l = countlen(s, c);
// 		tab[a] = malloc(countlen(s, c) * sizeof(char));
// 		y = 0;
// 		while (y < l - 1)
// 		{
// 			tab[a][y] = s[y];
// 			y++;
// 		}
// 		tab[a][y] = '\0';
// 		a++;
// 	}
// 	tab[size] = 0;
// 	return (tab);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	int		x;
// 	int		count;

// 	x = 0;
// 	count = 0;
// 	if (s[0] != c && s[0] != '\0')
// 		count++;
// 	while (s[x])
// 	{
// 		if (s[x] == c && s[x + 1] != c && s[x + 1] != '\0')
// 			count++;
// 		x++;
// 	}
// 	tab = tab1(s, count, c);
// 	return (tab);
// }
#include <stdlib.h>
#include <stdio.h>

char    *ft_chr(const char *str, int c)
{
    int    a;

    a = 0;
    while (str[a])
    {
        if (str[a] != c && str[a])
            return ((char *)&str[a]);
        a++;
    }
    return 0;
}
int    countlen(const char *str, char c)
{
    int    x;

    x = 0;
    str = ft_chr(str, c);
    while (str[x] != c && str[x])
    {
        x++;
    }
    return (x + 1);
}
char **ft_creat(const char *s,int size, char c)
{
    int x = 0;
    int l = 0;
    char **tab = malloc((size + 1) * sizeof(char *));
	if(!tab)
	{
		free(tab);
		return 0;
	}
    while(x < size)
    {
        s = ft_chr((&s[l]), c);
        l = countlen(s, c);
        tab[x] = malloc(countlen(s, c) * sizeof(char));
        if(!tab[x])
        {
            while(x >= 0)
                free(tab[x--]);
			free(tab);
			return 0;
        }
        x++;
    }
    return tab;
}

char    **tab1(char const *s, int size, char c)
{
    char    **tab;
    int        a;
    int        y;
    int     l;

    a = 0;
    l = 0;
    tab = ft_creat(s, size, c);
    while (a < size)
    {
		y = 0;
        s = ft_chr((&s[l]), c);
        l = countlen(s, c);
        while (y < l - 1)
        {
            tab[a][y] = s[y];
            y++;
        }
        tab[a][y] = '\0';
        a++;
    }
    tab[size] = 0;
    return (tab);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int        x;
    int        count;

    x = 0;
    count = 0;
    if (s[0] != c && s[0] != '\0')
        count++;
    while (s[x])
    {
        if (s[x] == c && s[x + 1] != c && s[x + 1] != '\0')
            count++;
        x++;
    }
    tab = tab1(s,count,c);
    return (tab);
}
int main()
{
    char *str = "hello hello hello hello hello hello    ";
    char sep = ' ';
    int x= 0;
    char **tab = ft_split(str,sep);
    while(x < 6)
    {
        printf("%s\n", tab[x]);
        x++;
    }
}