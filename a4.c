#include "stdio.h"
int main(){
	int a = 10;
	int b = 20;
	printf("%d %d \n", a, b);
	int* p;
	int c = a;
	p = &c;
	a = b;
	b = *p;
	printf("%d %d \n", a, b);
	return 0;
}
