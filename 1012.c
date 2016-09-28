#include <stdio.h>
#include <math.h>

//*Treinamento 1.012 - Salários mínimos
//*Fazer um programa em C leia o valor do salário mínimo M e o valor do salário S de um funcionário e diga quantos salários mínimos o funcionário ganha.


int main(){
	float m, s;
	scanf("%f", &m);
	scanf("%f", &s);
	if(m <= 0){
		printf("O SALARIO MINIMO DEVE SER MAIOR QUE ZERO\n");
	}else if(s < m){
		printf("O SALARIO DO FUNCIONARIO NAO PODE SER MENOR QUE O MINIMO\n");
	}else{
		printf("%.2lf\n", s/m );
	}
	return 0;

}
