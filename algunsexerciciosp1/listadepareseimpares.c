#include <stdio.h>
#include <math.h>

int main(){
	int n,i =0,d;
	printf("escolha 1-impares ou 2-pares:\n");
	scanf("%d",&d);
	printf("digite um numero:\n");
	scanf("%d",&n);
	//lista de numeros ímpares
	if (d==1){
		while(i<n) {
			i++;
			if(i%2!=0){
				printf("%d\n",i);
			}
		}
	}	
	//lista de numeros pares
	else {
		while(i<n) {
			i++;
			if(i%2==0){
				printf("%d\n",i);
			}
		}
	}
	
	return 0;
}