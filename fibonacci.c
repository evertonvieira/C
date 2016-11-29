#include <stdio.h>
//Contanto a quantidade de chamadas de recursão
//sequência
//1,1,2,3,5,8,13, 21....

int fibonacci(int);
static int i = 0;
int main(){
	int n, m;
	scanf("%d", &n);
	m = fibonacci(n);
	printf("\n");
	printf("Fibonaticci = %d\n", m );
  printf("Total de chamadas: %d\n", i );

	return 0;
}

int fibonacci (int n){
	i++;
	if (n < 2 && n >= 0)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}