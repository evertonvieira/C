#include <stdio.h>
#include <math.h>

//*Treinamento 1.011 - PG
//*Fazer um programa em C leia a razão R  de uma PG, seu primeiro termo P e o valor N e cacule o n-ésimo termo da PG. R, P e N são todos inteiros.

int main(){
	int r, n, a1;
	scanf("%d", &r);
	scanf("%d", &a1);
	scanf("%d", &n);
	if(n <= 0){
		printf("A QUANTIDADE DE TERMOS DEVE SER MAIOR QUE ZERO\n");
	}else{
		//an = a1*r**(n-1)
		printf("%.0lf\n", a1 * pow(r, (n-1)) );
	}
	return 0;

}
