#include <stdio.h>

void add1(int x){
	printf("Inside add1, &x = %p\n", &x);
	x = x + 1;
}

int main() {
	int x=50 ;

	printf("x = %d\n", x);
	printf("&x = %p\n", &x);

	add1(x);

	printf("x = %d\n", x);
	printf("&x = %p\n", &x);

	return 0;
}