#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int contadorf(char x[]){
	int i,contador=0;
	for(i=0;i<20;i++){
		contador++;
	}
	printf("%d",contador-1);
}


int main(){
	char x[20];
	char a = 'a';
	char e = 'e';
	char i = 'i';
	char o = 'o';
	char u = 'u';
	char car[1];
	
	int j,tamanho, contador=0;
	
	fgets(x,20,stdin);
	printf("%s\n", x);
	

	for(j=0;j<strlen(x)-1;j++){
		if (x[j]==a || x[j]==e || x[j]==i || x[j]==o || x[j]==u){
			contador++;
		}
	
	}
	printf("%i\n",contador);
	if(contador!=0){
		printf("Digite um caracter:\n");
		scanf("%c",&car);
	}
	
	for(j=0;j<strlen(x)-1;j++){
		if (x[j]==a || x[j]==e || x[j]==i || x[j]==o || x[j]==u){
			x[j]=car[0];
		}
	
	}
	printf("%s",x);
}
	
	