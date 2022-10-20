#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int x = 0;
    char *str = "aykfnk;jbkjjhjhjkdfhdgdgdgd1";
    int y = strlen(str);
    char *cpy = malloc(10 * sizeof(char));
    while(x < 10000000000)
    {
        cpy[x] = str[x];
        x++;
    }
    cpy[x] = '\0';
    printf("%s", cpy);
    // char *set = malloc(4);
    // set[0] = 's';set[1] = 'a';set[2] = 'i';set[3] = '\0';
    // printf("%s\n",set);
    // free(set);
    // char *tmp = malloc(4);
    // printf("%s",tmp);
}