#include<stdio.h>
#include<stdlib.h>
#define TAM 100
/*int contadorf(char x[]){
	int i,contador=0;
	for(i=0;i<TAM;i++){
		contador++;
	}
	printf("\n");
}
*/

int main(){ 
	char x[4]={"cla"};
	char y[4];
	int tamanho,i,c=0;
	for(i=2;i>=0;i--){
		y[c]=x[i];
		c++;
	}
	y[c]='\0';
	printf("\n%s",y);
	
}