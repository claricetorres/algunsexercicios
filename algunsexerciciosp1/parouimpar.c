#include <stdio.h>

int main(){
	int a;
	printf("digite um numero:\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("o numero e par");
	}
	else { 
		printf("o numero e impar");
	}
	return 0;
}