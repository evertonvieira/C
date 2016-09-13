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

//Exercício 2
void candidados(){
	int i, j, votos, voto;
	int sum1, sum2, sum3 = 0;
	scanf("%d", &votos);
	for (i = 0; i < votos; i++){
		scanf("%d", &voto);
		if (voto == 1){
			sum1 += 1;
		}else if(voto == 2){
			sum2 += 1;
		}else if(voto == 3){
			sum3 += 1;
		}else{
		}
	}
	if (sum1 > sum2  && sum1 > sum3){
		printf("1\n");
	}else if(sum2 > sum1  && sum2 > sum3){
		printf("2\n");
	}else if(sum3 > sum1  && sum3 > sum2){
		printf("3\n");
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
void situation(void){
	int n, i, k;
	printf("Digite o total de alunos:\n");
	scanf("%d", &n);
	char nome[10][50];
	float notas[50];
	for (i = 1; i <= n; i++){
		scanf("%f %[A-Z a-z]", &notas[i], nome[i]);
	}
	scanf("%d", &k);
	if (notas[k] >= 7){
		printf("%s Aprovado\n", nome[k]);
	}else{
		printf("%s Reprovado\n", nome[k]);
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
	int a, b;
	a = b = 1;
	scanf("%d", &n);
	for (i = 1; i < n; i++){
		c =  a + b;
		a = b;
		b = c;
	}
	printf("%d\n", a);

}


void jokenpo(){
	int rodada, i, j1, j2;
	char mao1, mao2;
	j1 = 0;
	j2 = 0;
	scanf("%d\n", &rodada);
	while (rodada >= 0){
		scanf("%c\n", &mao1);
		scanf("%c\n", &mao2);

		if (mao1 != mao2){
      if (mao1 == 'd'){
				if (mao2 == 'p'){
					j2 += 1;
				}else{
					j1 += 1;
				}
			}else if(mao1 == 'p'){
				if (mao2 == 't'){
					j2 += 1;
				}else{
					j1 += 1;
				}
			}else{
				if (mao2 == 'd'){
					j2 += 1;
				}else{
					j1 += 1;
				}
			}
		}
		rodada--;
	}
	printf("%d , %d\n", j1, j2);
	if(j1 == j2){
    printf("EMPATE\n");
	}else{
    if (j1 > j2){
			printf("Maria\n");
    }else{
			printf("João\n");
		}
	}

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

void parcelas(){
	float r = 0.0957;
	int k, i;
	float divida, morti, juros, D;
	char mes[50];
	scanf("%f %f %f %s %d", &divida, &morti, &juros, mes, &k);
	//dívida do mês seguinte
	//D' = D – A*(1+r) + D*r.
	//parcela seguinte P' = A*(1+r) + D*x*(1+r)
	for (i = 0; i < k ; i++){
		//D = (divida - morti*(1+r) + divida*r);
		printf("parcela %.2f\t", morti*(1+r) + divida*juros*(1+r) );
		//printf("divida %.2f\n", (divida - morti*(1+r) + divida*r));
	}


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
		case 2:
			candidados();
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
		case 7:
			jokenpo();
		break;
		case 8:
			troca();
		break;
		case 9:
			parcelas();
		break;
		default:
			printf("Exercício inexistente :(\n");
		break;
	}
	return 0;
}