#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[20], sobrenome[20];

	printf("Digite seu nome: \n");
	scanf("%s", nome);

	printf("Digite seu sobrenome: \n");
	scanf("%s", sobrenome);

	printf("Ola senhor %s, %s. Bem-vindo ao curso C Progressivo.\n", sobrenome, nome);

    return 0;
}
