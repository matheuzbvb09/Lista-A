#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *nome[50];
int ano_nasci, ano, resposta;

int main()
{
	printf("Digite seu nome...\n");
	scanf("%[^\n]", &nome);
	printf("Digite o ano de seu nascimento...\n");	
	scanf("%d", &ano_nasci);
	printf("Digite o ano atual...\n");
	scanf("%d", &ano);
	resposta=ano-ano_nasci;
	printf("\n %s nasceu em %d entao sua idade e %d anos.\n",nome,ano_nasci,resposta);
	system("pause");
	
}

