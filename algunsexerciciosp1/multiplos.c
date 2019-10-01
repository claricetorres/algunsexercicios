#include <stdio.h>
#include <math.h>
int main (){
  //dados
	int multi,a,b,c;
	printf("digite o numero do qual vc quer saber os multiplos:\n");
	scanf("%d",&b);
	printf("digite a com qual numero quer comecar a lista(0-primeiro,1-segundo...):\n");
	scanf("%d",&a);
	printf("quantos numeros voce quer na lista?\n");
	scanf("%d",&c);
	printf("os primeiros %d multiplos de %d sao:\n",c,b);
  //loop para calcular os multiplos
	while(a<c) {
		multi=a*b;
		a++;
		printf("%d\n",multi);
	}
	return 0;
}