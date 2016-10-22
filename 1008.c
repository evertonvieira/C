#include <stdio.h>
#include <math.h>

//*Treinamento 1.008 - Propriedades de um paralelepípedo
//*Fazer um programa em C leia os três lados L1, L2 e L3 de um paralelepípedo retângulo e imprima na tela a área total de suas faces, o seu volume e sua diagonal.


int main(){
	double l1, l2, l3;
	scanf("%lf", &l1);
	scanf("%lf", &l2);
	scanf("%lf", &l3);
	if(l1 < 0 || l2 < 0 || l3 < 0){
		printf("NENHUM LADO PODE SER NEGATIVO\n");
	}else{
		printf("%.2lf\n", 2*(l1*l2+l1*l3+l3*l2));
		printf("%.2lf\n", (l1*l2*l3));
		printf("%.2lf\n", sqrt(pow(l1,2)+ pow(l2,2) + pow(l3,2)));
	}
	return 0;

}
