/*malloc ax*/
/*https://github.com/asliddinxanov */
/*2022-03-23*/

#include<stdio.h>
#include<stdlib.h>
#define Nx 5
#define Ny 10

int main(void) {
	int(*ip)[Nx];
	int i, j, a, b;
	a = 5, b = 10;

	ip = (int(*)[Nx])malloc(sizeof(int) * a* b);
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			ip[i][j] = i * b + j;
			printf("%4d", ip[i][j]);
		}
		printf("\n");
	}

	free(ip);
	return 0;

}
