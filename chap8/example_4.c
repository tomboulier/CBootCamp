#include <stdio.h>
#include "stdlib.h"

void add(int x, int y){
	printf("%d + %d = %d\n", x,y,x+y);
}

void doMath(void fn(int a, int b), int x, int y ){
	printf("fn = %p\n",fn);
	//printf("(*fn) = %p\n",(*fn));
	fn(x,y);
}

int main() {
	int x = 1 ;
	int y = 2 ;

	doMath(add,x,y);

	return 0;
}