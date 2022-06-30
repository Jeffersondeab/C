 #include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, cont;
	printf("Digite um numero:");
	scanf("%d",&num);
	
	for(cont=1;cont <=15; cont=cont+1){
		printf("\n Número = %d",num);
	}
	return 0;
}
