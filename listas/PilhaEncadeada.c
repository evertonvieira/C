#include <stdio.h>
#include <stdlib.h>
typedef struct NoSeq{
	int valor;
	struct NoSeq *prox;
} NO;

typedef struct lista{
	NO *inicio;
	int N;
}LISTA;

// complexidade: Θ(1) (constante)
void construir(LISTA *lista){
	lista->N = 0; //seta o valor da lista como vazia
	lista->inicio = NULL;
}
void destruir(){
	//vazio
}

void inserir(LISTA * lista, int valor){
	NO * Novo = (NO*) malloc(sizeof(NO));
	Novo->valor = valor;

	if (lista->inicio == NULL){
		Novo->prox = lista->inicio;
		lista->inicio = Novo;
	}else{
		NO * p;
		p = lista->inicio;
		while (p != NULL){
			p = p->prox;
		}
		Novo->prox = NULL;
		p->prox = Novo; // erro aqui
	}
	lista->N += 1;
}

//exibe os elementos da lisra do inicio ao fim
// complexidade: Θ(N) (tamanho da lista)
void exibe(LISTA *lista){
	NO *p = lista->inicio;
	while (p != NULL){
		printf("%d - ", p->valor);
		p = p->prox;
	}
	printf("\n");
}




// complexidade: Θ(1) (constante)
void tamanho(LISTA *lista){
	printf("A lista possui: %d\n", lista->N);
}


int main () {
	LISTA lista;
	construir(&lista);
	tamanho(&lista);
	inserir(&lista, 5);
	inserir(&lista, 10);
	inserir(&lista, 4);
	inserir(&lista, 7);
	exibe(&lista);
	tamanho(&lista);
	exibe(&lista);
	return 0;
}

