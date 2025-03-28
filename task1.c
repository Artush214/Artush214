#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
skizb:
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	if(a > b){
	printf("Error \n");
	goto skizb;
	}

	while(a <= b){
		if(a % 5 == 0)
			printf("%d ", a);
		a++;
	}
	printf("\n");


return 0;}
