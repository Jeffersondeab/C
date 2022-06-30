
#include <stdio.h>



int main()

{
	float nota1, nota2, nota3, nota4, media;
	
	printf("nota 1:");
	scanf("%f", &nota1);
	
	printf("nota 2:");
	scanf("%f",&nota2);
	
	printf("nota 3:");
	scanf("%f",&nota3);
	
	printf("nota 4:");
	scanf("%f",&nota4);
	
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("media = %f", media);
	
	if(media >=7) printf(",Aluno aprovado");
	
	else
		printf(",Aluno reprovado");
	
}
