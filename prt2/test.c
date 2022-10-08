#include <stdio.h>
#include <string.h>
//#include <cstdlib>

int main() {
    char s[20] = "hello world";
	//if(s[1] == 2000)
		//exit( EXIT_FAILURE );
	bzero(s,5);
	printf("%s", s);
    //return EXIT_SUCCESS;
}
