#include <stdio.h>
int main(){
	int a = 3;

	int* pa = &a;

	printf("%p \n", pa);
	printf("%d \n", *pa);

	*pa = 10;
	
	printf("%d \n", a);
	




return 0;
}
