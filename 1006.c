#include <stdio.h>
#include <math.h>

//*Treinamento 1.006 - Propriedades de um quadrado
//*Fazer um programa em C leia o lado L (double) de um quadrado e imprima na tela o seu perímetro, área e diagonal


int main(){
	double l;
	scanf("%lf", &l);
	if(l < 0){
		printf("O LADO NAO PODE SER NEGATIVO\n");
	}else{
		printf("%.2lf\n", (4*l));
		printf("%.2lf\n", (pow(l, 2)));
		printf("%.2lf\n", l*sqrt(2));
	}
	return 0;

}
