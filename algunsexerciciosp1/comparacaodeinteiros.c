#include <stdio.h>

	int main(){
		int a, b;
		printf("digite dois numeros:\n");
		scanf("%d",&a);
		scanf("%d",&b);
		if(a>b){
			printf("%d e maior que %d",a,b);
			}
			else
			if(a==b){
				printf("%d e igual a %d", a,b);
			}
		else{
			printf("%d e maior que %d",b, a);
		}
		return 0;
	}