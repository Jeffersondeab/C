// MÉDIA E MAIOR NOTA

#include <stdio.h>
#include <stdlib.h>



int main()
{
	float nota1, media, maior, soma;
	maior=0;
	soma =0;
	
	for(nota1=1; nota1<=4; nota1++){
		printf("Digite sua nota: ");
		scanf("%f", &nota1);
	
		if(nota1 > maior){
			maior=nota1;
		}
		
		soma = nota1;
		media = soma / 4;
		if(media >= 7){
			printf("Aluno aprovado");
		}else
			printf("Aluno reprovado");
	}
	printf ("A maior nota foi %f", maior); return 0;
} 





