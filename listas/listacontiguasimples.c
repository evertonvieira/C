#include <stdio.h>
#include <stdlib.h>
#define MAXN 1000
typedef struct NoSeq{
	int valor;
} NO;

typedef struct lista{
	NO vetor[MAXN];
	int N;
}LISTA;

// complexidade: Θ(1) (constante)
void construir(LISTA *lista){
	lista->N = 0; //seta o valor da lista como vazia
}
void destruir(){
	//vazio
}

// adicionar elemento
// parâmetros(tipo *ponteiro, int posicao, int valor)
// complexidade: Θ(N) (número de elementos da lista)
void adicionar(LISTA *lista, int position, int valor){
	if (position > lista->N){
		printf("Posição inesistente\n");
	}else{
		if (!lista->N){
			lista->vetor[0].valor = valor;
		}else{
			int i;
			for (i = lista->N; i > position; i--){
				lista->vetor[i] = lista->vetor[i-1];
			}
			lista->vetor[position].valor = valor;
		}
		lista->N +=1;
	}
}

//busca sequciancial
// complexidade: Θ(N) (número de elementos da lista)
int busca(LISTA *lista, int valor){
	int i;
	for (i = 0; i < lista->N ; i++){
		if (lista->vetor[i].valor == valor){
			return valor;
		}
	}
	return -1;
}

// complexidade: Θ(N) (número de elementos da lista)
void deletarElemento(LISTA *lista, int position){
	if (position > lista->N){
		printf("elemento inexistente :(\n");
	}else{
		int i;
		for (i = position; i < lista->N ; i++){
			lista->vetor[i] = lista->vetor[i+1];
		}
	}
	lista->N -=1;
}

//exibe a lista
// complexidade: Θ(N) (número de elementos da lista)
void exibeLista(LISTA *lista){
	int i;
	for (i = 0; i < lista->N ; i++){
		printf("%d, ", lista->vetor[i].valor);
	}
	printf("\n");
}
// complexidade: Θ(1) (constante)
void tamanho(LISTA *lista){
	printf("A lista possui: %d\n", lista->N);
}


int main () {
	int elemento;
	LISTA lista;
	construir(&lista);
	tamanho(&lista);
	adicionar(&lista,  0, 6);
	exibeLista(&lista);
	tamanho(&lista);
	adicionar(&lista,  1, 7);
	adicionar(&lista,  2, 5);
	adicionar(&lista,  3, 10);
	exibeLista(&lista);
	tamanho(&lista);
	adicionar(&lista,  3, 17);
	exibeLista(&lista);
	deletarElemento(&lista,  1);
	exibeLista(&lista);
	elemento = busca(&lista, 6);
	if (elemento != -1){
		printf("%d\n", elemento);
	}else{
		printf("Elemento não encontrado!\n");
	}
	tamanho(&lista);
	return 0;

}