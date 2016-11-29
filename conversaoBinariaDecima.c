#include <stdio.h>

int main()
{

	int d, proximo, atual;
	long unsigned int  c;
	atual = getchar();
	proximo = getchar();
	c = (atual - '0')*2 + (proximo - '0');
	printf("2x%d + %d = %d\n", (atual - '0'), (proximo - '0'), c );
	while ((proximo = getchar()) != '\n'){
		int d = c*2 + (proximo - '0');
		printf("2x%d + %d = %d\n", c, (proximo - '0'), d );
		c = 2*c + (proximo - '0');
	}
	printf("%ld\n", c);
	return 0;

}

