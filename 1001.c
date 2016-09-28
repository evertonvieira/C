#include <stdio.h>
#include <stdlib.h>

//*Treinamento 1.001 - Antecessor e sucessor
//*Fazer um programa em C que leia um número inteiro e
//*escreva na tela o seu antecessor e sucessor.

int main(){
	int n;


	scanf("%d", &n);
	printf("%d\n", n-1);
	printf("%d\n", n+1);
	return 0;

}
