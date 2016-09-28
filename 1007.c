#include <stdio.h>
#include <math.h>

//*Treinamento 1.007 - Propriedades de um círculo
//*Fazer um programa em C leia o raio R (double) de um círculo e imprima na tela o seu perímetro e área.


#define PI 3.14159265358979
int main(){
	double r;
	scanf("%lf", &r);
	if(r < 0){
		printf("O RAIO NAO PODE SER NEGATIVO\n");
	}else{
		printf("%.2lf\n", (2*r*PI));
		printf("%.2lf\n", (pow(PI*r, 2)));
	}
	return 0;

}
