#include <stdio.h>
#define MAX 10000

int main(){

	int  c, d, proximo, i = 0;
	int atual;
	atual = getchar();
	while ((proximo = getchar()) != '\n'){
		if (!i){
			c = (atual - '0')*2 + (proximo - '0');
			i++;
			printf("%d - ", c);
		}else{
			c = 2*c + (proximo - '0');
			printf("%d - ", c);
		}
	}
	printf("\n");
	return 0;
}
