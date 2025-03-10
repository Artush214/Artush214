#include <stdio.h>
int main(){
        char ch = '0';
        scanf("%c",&ch);
        ch = ch | 32;
        printf("%c\n",ch);
        return 0;
} 
