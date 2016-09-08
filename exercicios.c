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
	for (i = 1; i <= n; i++){
		scanf("%f", &numero);
		if (i == 1){
			maior = menor = numero;
		}
		sum += numero;
		//maior numero real
		if (numero > maior){
			maior = numero;
		}else{
			//menor numero real
			if (numero < menor){
				menor = numero;
			}
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
		//getchar("%c", &alunos[i]);

	}

}

//Exercício 5
int fatorial(){
	int n, fat, i;
	printf("Digite o número a encontrar o fatorial:\n");
	scanf("%d", &n);
	if (n == 0){
		return printf("0\n");
	}else{
		fat = 1;
		for (i = 1; i <= n; i++){
			fat *= i;
		}
		printf("%d\n", fat);
	}
}

//Exercício 6
int fibonacci() {
	int i, n, c, sum;
	int a, b = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		c =  a + b;
		a = b;
		b = c;
	}
	printf("%d\n", a);
}
void troca(){
	int a, b, *c, temp;
	scanf("%d", &a);
	scanf("%d", &b);
	c = &a;
	temp = b;
	b = *c;
	a = temp;
	printf("%d %d\n", a, b);
}

int main (){
	int num, n;
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
		case 5:
			fatorial();
		case 6:
			fibonacci();
		break;
		case 8:
			troca();
		break;
		default:
			printf("Exercício inexistente :(\n");
		break;
	}
	return 0;
}