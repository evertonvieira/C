#include <stdio.h>
#include <math.h>

//*Treinamento 1.002 - Dividendo, divisor, quociente e resto
//*Fazer um programa em C que leia dois números e escreva o dividendo, divisor, quociente e resto

int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	return 0;

}
