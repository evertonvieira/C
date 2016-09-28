#include <stdio.h>
#include <string.h>

//*Exercício U2.3 - Palíndromo

int main(){
	int i;
  char string[50];
	scanf("%s", string);
 	for(i = 0; i< strlen(string); ++i){
 		if (string[i] != string[strlen(string)-1-i]){
			printf("NAO\n");
			return 0;
		}
 	}
	printf("SIM\n");
 	return 0;
}