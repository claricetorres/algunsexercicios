#include <stdio.h>
#include <math.h>

int main() {
	int d;
	printf("escolha um numero:\n");
	scanf("%d",&d);
	if ((d%5==0 && d%3!=0) || (d%3==0 && d%5!=0)){
		printf("esse numero e divisivel por 5 ou 3 mas nao pelos 2");
	}
	else {
		printf("esse numero nao e divisivelpor 5 ou 3 exclusivamente");
	}
	
	
	return 0;
}