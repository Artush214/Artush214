#include <stdio.h>
int main(){
	int* p  = NULL;
	if(p == NULL){
		printf("p is  NULL \n");
	
	}
	int a = 10;
	p = &a;
	printf("%d \n", *p);



return 0;
}
