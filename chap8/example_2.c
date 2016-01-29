#include <stdio.h>
#include "stdlib.h"

int main() {
	int *vec ;
	vec = malloc(3*sizeof(int));
	vec[0] = 3 ;
	vec[1] = 1 ;
	vec[2] = 4 ;
	printf("vec[2]=%d\n", *(vec+2));
	free(vec);
	return 0;
}