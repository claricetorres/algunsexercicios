#include<stdio.h>
#include<stdlib.h>




int main(){ 
	char str[]={'B','r','a','s','i','l'};
	int i, c=0;
	

	printf("%s\n",str);
	
	for(i=5;i>=0;i--){
		
		printf("%c",str[i]);
		
	}
	printf("\n%s",str);
}
