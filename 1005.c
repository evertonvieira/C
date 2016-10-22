#include <stdio.h>
#include <math.h>

//*Treinamento 1.005 - Propriedades de um retângulo
//*Fazer um programa em C leia a base B (double) e a altura H (double) de
//*um retângulo e imprima na tela o seu perímetro, área e diagonal

int main(){
	double b, h;
	int t;
	scanf("%lf", &b);
	scanf("%lf", &h);
	if(b < 0){
		printf("A BASE NAO PODE SER NEGATIVA\n");
	}else if(h < 0){
		printf("A ALTURA NAO PODE SER NEGATIVA\n");
	}else{
		printf("%.2lf\n", 2*(b+h));
		printf("%.2lf\n", (b*h));
		printf("%.2lf\n", sqrt(pow(b, 2)+pow(h, 2)));
	}
	return 0;

}
