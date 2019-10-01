#include <stdio.h>
#include <math.h>
//calcula medias de 3 numeros 
int main() {
	int d;
	float media, a, b, c;
	printf("oi\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("escolha entre medias:\n1- geometrica\n2-ponderada\n3-harmonica\n4-aritmetica:\n");
	scanf("%d",&d);
	switch(d){
		case 1: printf("media geometrica:%f\n",media=a*b*c);break;
		case 2: printf("media ponderada:%f\n",media=(a+(2*b)+(3*c))/6);break;
		case 3: printf("media harmonica:%f\n",media=((1)/((1/a)+(1/b)+(1/c))));break;
		case 4: printf("media aritmetica:%f\n",media=(a+b+c)/3);break;
		default: printf("nada");
	}
	
	return 0;
}