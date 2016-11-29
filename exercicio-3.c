//contanto espaços, tabuação e linhas
#include <stdio.h>
int main(){

	int c, e = 0, t = 0, n = 0;
	while ((c = getchar()) != EOF){
		switch (c){
			case ' ':
				e++;
				break;
			case '\t':
				t++;
				break;
			case '\n':
				n++;
				break;
			default:
			break;
		}
	}
	printf("%d %d %d", e, t, n);
	return 0;

}