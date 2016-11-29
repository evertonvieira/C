#include <stdio.h>
#define MAX 10000

struct NoSeq  {
	char valor;
	char chave;
};
typedef struct NoSeq No;

struct Lista {
	No array[MAX];
	int N;
};

void struct contruir(){
	struct Lista lista;
	lista.N = 0;
	return lista;
}


int main () {

	array = contruir();

	array[0].valor = 40;


	//B.fila[2].prioridade = 4;
	//B.fila[2].elem = 7;

	//printf ("B.fila[2].prioridade = %d\n", B.fila[2].prioridade);
	printf ("B.fila[2].elem = %d\n", array.N);
	printf ("B.fila[2].elem = %d\n", array[0].valor);

	return 0;

}