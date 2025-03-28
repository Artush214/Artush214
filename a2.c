#include <stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int* pa = &a;
	printf("%d \n", *pa);

	a = 30;
	printf("%d \n", *pa);



return 0;
}
