#include <stdio.h>

typedef struct No{
	int id;
	int  valor;
	struct NOH *prox;
} NOH;

typedef struct Lista{
	int N;
	NOH * inicio;
	NOH * fim;
} LISTA;


//seta a lista como vazia
void construir(LISTA * lista){
	lista->N = 0;
	lista->inicio = NULL;
	lista->fim = NULL;
}


// 0 = inicio,  1 = fim
void inserir(LISTA * lista, int id, int valor, int position){
	NOH * novo = malloc( sizeof( NOH ) ); // alocando um novo no dinamicamente
	novo->id = id;
	novo->valor = valor;
	if (!position || !lista->N){
		novo->prox = lista->inicio;
		lista->inicio = novo;
		lista->fim = novo;
	}else{
		lista->fim->prox = novo;
		novo->prox = NULL;
		lista->fim = novo;
	}
	lista->N += 1;
}

void exibir(LISTA * lista){
	NOH * p = lista->inicio;
	while (p != NULL){
		printf("%d ", p->valor);
		p = p->prox;
	}
	printf("\n");
}
//tamanho da lista
void tamanho(LISTA * lista){
	printf("Tamanho da lista: %d\n", lista->N);
}


int main(){

	LISTA lista;

	construir(&lista);
	inserir(&lista, 1, 2, 0);
	inserir(&lista, 1, 5, 0);
	inserir(&lista, 1, 10, 1);
	inserir(&lista, 1, 5, 0);
	exibir(&lista);
	tamanho(&lista);

	return 0;
}