#include<stdio.h>
#include<stdlib.h>

int contadorf(char x[]){
	int i,contador=0;
	for(i=0;i<7;i++){
		contador++;
	}
	printf("%d",contador-1);
}

int main() {
	int i, contador;
	char string[]="Brasil";
	contadorf(string);
}