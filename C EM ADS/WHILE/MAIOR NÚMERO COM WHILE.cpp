#include <stdio.h>
#include <stdlib.h>

 

int main(){
	int num, maior, cont;
	maior = 0;
	cont = 1;
	while(cont <= 5){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num > maior){
			maior = num;
		}
		cont ++;
	}
	printf("O maior valor e %d", maior);
		return 0;
}
