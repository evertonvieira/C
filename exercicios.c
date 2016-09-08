#include <stdio.h>
#include <string.h>


//Exercício 0
int helloWorld(){
	printf("Hello World\n");
}

//Exercício 1
int interval(){
	int a, b, i;
	printf("Digite um intervalo:");
	scanf("%d", &a);
	scanf("%d", &b);

	for(i = a-1; a <= b; a++ ){
		printf("%d\n", a);
	}

}
//Exercício 3
void exercicio3(){
	int n, i;
	float sum, menor, maior, numero;
	printf("Digite o total de números:\n");
	scanf("%d", &n);
	menor = maior = 0;
	for (i = 0; i < n; i++){
		scanf("%f", &numero);
		sum += numero;

		//maior numero real
		if (numero > maior){
			maior = numero;
		}else{
			menor = numero;
		}
	}

	printf("%.1f\n", sum);
	printf("%.1f\n", (sum/n));
	printf("%.1f\n", maior);
	printf("%.1f\n", menor);
}

//Exercício 4
void situation(){
	int n, i;

	printf("Digite o total de alunos:\n");
	scanf("%d", &n);
	float notas[n];
	char alunos[n];
	for (i = 0; i < n; i++){
		scanf("%f", &notas[i]);
		getchar("%c", &alunos[i]);

	}

}

int main (){
	int num;
	printf("Digite o número do exercício:\n");
	scanf("%d", &num);
	switch(num){
		case 0:
			helloWorld();
		break;
		case 1:
			interval();
		break;
		case 3:
			exercicio3();
		break;
		case 4:
			situation();
		break;
		default:
			printf("Exercício inexistente :(\n");
		break;
	}
	return 0;
}