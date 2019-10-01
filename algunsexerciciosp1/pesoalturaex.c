#include <stdio.h>
#include <math.h>

int main() {
	float a,b;
	printf("escreve sua altura:\n");
	scanf("%f",&a);
	printf("escreve seu peso:\n");
	scanf("%f",&b);
	if(a<1.20){
		if(b<60) {
			printf("A");
		}
		if (b>=60 && b<=90) {
			printf("D");
		}
		if (b>90) {
			printf("G");
		}
	}
	if(a>=1.20&&a<=1.70){
		if(b<60) {
			printf("B");
		}
		if (b>=60 && b<=90) {
			printf("E");
		}
		if (b>90) {
			printf("H");
		}
	}
	if(a>1.70){
		if(b<60) {
			printf("C");
		}
		if (b>=60 && b<=90) {
			printf("F");
		}
		if (b>90) {
			printf("I");
		}
	}
	return 0;
}