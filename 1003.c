#include <stdio.h>
#include <math.h>

//*Treinamento 1.003 - Cálculo de juros
//*Fazer um programa em C leia o valor do empréstimo (double) e
//*calcule o valor da dívida após 6 meses, com uma taxa de juros de 5% ao mês.


int main(){
	double emprestimo;
	scanf("%lf", &emprestimo);
	if(emprestimo < 0){
		printf("O VALOR DO EMPRESTIMO NAO PODE SER NEGATIVO\n");
	}else{
		printf("%.2lf\n", emprestimo * pow((1+0.05), 6));
	}
	return 0;

}
