#include <stdio.h>
#include <math.h>

//*Treinamento 1.010 - PA
//*Fazer um programa em C leia a razão R  de uma PA, seu primeiro termo P e o valor N e cacule o n-ésimo termo da PA. R, P e N são todos inteiros.

int main(){
	int r, n, a1;
	scanf("%d", &r);
	scanf("%d", &a1);
	scanf("%d", &n);
	if(n <= 0){
		printf("A QUANTIDADE DE TERMOS DEVE SER MAIOR QUE ZERO\n");
	}else{
		//an = a1 + (n -1)*r
		printf("%d\n", a1+(n-1)*r );
	}
	return 0;

}
