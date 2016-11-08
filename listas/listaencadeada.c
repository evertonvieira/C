#include <stdio.h>
#include <stdlib.h>
#define MAXN 1000
typedef struct Noh{
	char valor;
	struct Noh *prox;
} NO;

typedef struct lista{
	struct NO *inicio;
	int N;
} LISTA;


// complexidade: Θ(1) (constante)
void construir(LISTA *lista){
	lista->inicio = NULL;
	lista->N = 0; //seta o valor da lista como vazia

}
void destruir(){
	//vazio
}
// complexidade: Θ(1) (constante)
void adicionar(LISTA *lista, int valor){
	NO *Novo = (NO*) malloc(sizeof(NO));
	Novo->valor = valor;
	if (lista->inicio == NULL){
		Novo->prox = lista->inicio;
		lista->inicio = Novo;
	}else{
		NO *p = lista->inicio;
		while (p->prox != NULL){
			p = p->prox;
		}
		Novo->prox = NULL;
		p->prox = Novo;
	}
	printf("Novo elemento: %d\n", Novo->valor);
	lista->N +=1;

}
// complexidade: Θ(N) (número de elementos)
void mostrar(LISTA *lista){
	NO *p;
	p = lista->inicio;
	while (p != NULL){
		printf("%d ", p->valor);
		p = p->prox;
	}
	printf("\n");
}

// tamanho da lista
// complexidade: Θ(1) (constante)
void tamanho(LISTA * lista){
	printf("Tamanho da lista = %d\n", lista->N);
}


int main () {
	LISTA lista;
	construir(&lista);
	adicionar(&lista, 4);
	adicionar(&lista, 6);
	adicionar(&lista, 7);
	adicionar(&lista, 8);
	tamanho(&lista);
	mostrar(&lista);
	adicionar(&lista, 45);
	tamanho(&lista);
	mostrar(&lista);
}