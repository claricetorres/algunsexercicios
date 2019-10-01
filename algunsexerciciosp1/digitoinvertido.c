#include <stdio.h>
#include <math.h>	
	int main(){
		int a,b;
		printf("digite um numero de 3 digitos:");
		scanf("%d",&a);
		b = a%10*pow(10,2)+(a%100-a%10)+(a/100);
		printf("o numero invertido eh:%d",b);
		return 0;
		
		}