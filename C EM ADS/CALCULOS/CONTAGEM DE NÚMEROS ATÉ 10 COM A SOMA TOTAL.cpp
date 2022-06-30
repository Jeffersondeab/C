#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, maior, ind, media, total;
	maior = 0;
	
	for(ind=1; ind <= 10; ind++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		total = total + num;
		
		if (num > maior)
		maior = num;
	}
	printf("O maior lido e %d e o total e %d",maior, total);
	return 0;
}
