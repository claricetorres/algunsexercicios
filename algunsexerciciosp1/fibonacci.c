#include <stdio.h>
#include <math.h>

int main() { 
	int num, f1, f2, i, resultado;
	
	printf("digite um numero:\n");
	scanf("%d",&num);
	// valores iniciais
	f1=0;
	f2=1;
	//condicionais
	for (i=1;i<=num;i++) {
		if (i==1){
			printf("%d\n",f1);
		}
		else if (i==2) {
			printf("%d\n",f2);
		}
		else {
		resultado = f1+f2;
		f1=f2;
		f2=resultado;
		printf("%d\n",resultado);
		}
	}
}