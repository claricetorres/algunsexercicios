#include <stdio.h>
#include <math.h>

int main() {
	//resolver equaçao do tipo ax^2+bx+c=0
	int a,b,c,delta;
	float raiz1,raiz2;
	printf("digite os 3 coeficientes inteiros de sua equacao:\n");
	scanf("%d %d %d",&a,&b,&c);
	delta = pow(b,2)-(4*a*c);
	raiz1= (-b+sqrt(delta))/(2*a);
	raiz2= (-b-sqrt(delta))/(2*a);
	if(a==0) {
		printf("nao e uma eq de 2 grau");
	}
	else if (delta>0) {
		printf("1 raiz:%f\n2 raiz:%f",raiz1, raiz2);
	}
	else if (delta==0) {
		printf("raiz:%f",raiz1);
	}
	else if (delta < 0) {
		printf("raiz complexa");
	}
	return 0;
}
	