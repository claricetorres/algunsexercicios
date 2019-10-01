#include <stdio.h>
#include <math.h>

int main() { 
	int a,b;
	printf("digite um numero:\n");
	scanf("%d",&b);
	printf("divisores:\n");
	for(a=1;a<b;a++){
		if(b%a==0) {
			printf("%d\n",a);	
		}
	}
	return 0;
}