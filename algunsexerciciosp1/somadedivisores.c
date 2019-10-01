#include <stdio.h>
#include <math.h>

int main() { 
	int soma,a,b;
	printf("digite um numero:\n");
	scanf("%d",&b);
	soma=0;
	for(a=1;a<b;a++){
		if(b%a==0) {
			soma+=a;	
		}
	}
	printf("soma:%d",soma);
	return 0;
}