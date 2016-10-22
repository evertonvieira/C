#include <stdio.h>
#include <math.h>

//*Treinamento 1.009 - Hipotenusa
//*Fazer um programa em C leia os dois catetos A e B de um
//*triângulo retângulo e imprima na tela a sua hipotenusa.

int main(){
	float a, b, c;
	scanf("%f", &b);
	scanf("%f", &c);
	if (b < 0 || c < 0){
		printf("NENHUM CATETO PODE SER NEGATIVO\n");
		return 0;
	}
	a = sqrt(pow(b, 2) + pow(c, 2));
	printf("%.2f\n", a);
	return 0;

}
