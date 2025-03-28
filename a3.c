#include <stdio.h>
int main(){
	char a = 10;

	char* p = &a;
	printf("%p \n", p);
	p++;
        printf("%p \n", p);
	return 0;
}
