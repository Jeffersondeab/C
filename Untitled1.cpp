

#include <stdio.h>

//include string serve para amarzenar os textos, os dados a baixo
#include <string.h>

//include locale serve juntamente com o setLocale para ajustar o idioma.

#include <locale.h>

int idade;

float salario;

char nome[50];

main(void){
	
	setLocale(LC_ALL, "Portuguese");
	
	printf("Digite a sua idade:");
	scanf("%i", &idade);
	
	printf("Digite seu s�lario");
	scanf("%f",&salario);
	
	printf("Qual seu nome?");
	scanf("%s",&nome);
	
	printf("Os dados informados s�o: i% %f %s", idade, salario, nome);
}

