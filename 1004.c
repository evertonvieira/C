#include <stdio.h>
#include <math.h>

//*Treinamento 1.004 - Cálculo de Juros 2
//*Fazer um programa em C leia o valor do empréstimo E (double), a
//*taxa de juros percentual J (double) e a quantidade de meses M (inteiro positivo)
//*e calcule o valor da dívida após M meses, com uma taxa de juros de M% ao mês.

int main(){
	double e, d, j;
	int t;
	scanf("%lf", &e);
	scanf("%lf", &j);
	scanf("%d", &t);
	if(e < 0){
		printf("O VALOR DO EMPRESTIMO NAO PODE SER NEGATIVO\n");
	}else if(j < 0){
		printf("A TAXA DE JUROS NAO PODE SER NEGATIVA\n");
	}else if(t < 0){
		printf("A QUANTIDADE DE MESES NAO PODE SER NEGATIVA\n");
	}else{
		printf("%.2lf\n", e * pow((1+j/100), t));
	}
	return 0;

}
