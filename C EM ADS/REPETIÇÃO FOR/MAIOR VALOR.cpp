#include <stdio.h>
#include <stdlib.h>

 

int main(){
	int num, maior, cont;
	maior = 0;
	
	for (cont = 1; cont <= 5; cont++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num > maior){
			maior = num;
		}
	}
	printf("O maior valor e %d", num);
		return 0;
}
