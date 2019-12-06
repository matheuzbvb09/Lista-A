#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	char nome[100];
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	printf("\n%s", nome);
	
	printf("Digite sua idade: \n");
	scanf("%d",&i);
	printf("Sua idade é: %d",i);
	
	system("pause");
	return 0;
}
