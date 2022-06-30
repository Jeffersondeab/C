 #include <stdio.h>
#include <stdlib.h>
// o locale.h é para ajustar a potuação das palavras no terminal.
#include <locale.h>

int main(){
	
	int estoque, quantidade, saida, parar;
	
	estoque = 10;
	
	while (estoque != 0){
		printf("quanto deseja retirar: ");
		scanf("%d", &saida);
		estoque -= saida;
		
		printf("Deseja continuar? Digite [1] para continuar e [2] parar: ");
		scanf("%d", &parar);
		if(parar == 1){
			false;
		}if(parar == 2){
			break;
		}
	}
		
 
	
	printf("Atualmente tem %d no estoque", estoque);
	
	if(estoque <= 5){
		printf(" \n E necessário fazer pedido");
	}if(estoque >= 6){
		printf("\nNo momento não há necessidade de realizar outro pedido");
	}
	return 0;
}
