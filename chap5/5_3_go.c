// gcc -o go.o 5_3_go.c

#include <stdio.h>

int isprime(int n) {
	if(n == 1) return 0; // convention
	for (int i = 2; i*i <= n; ++i)
	{
		if ((n % i) == 0) return 0;
	}
	return 1;
}

int nextprime(int p){
	if(isprime(p)==1) return p;
	return nextprime(p+1);
}

int main(int argc, char const *argv[])
{
	int N,p;

	N = 1000;
	p = nextprime(1);

	for(int i = 1 ; i <= N ; i++){
		printf("%d: %d\n", i,p);
		p = nextprime(p+1);
	}
	return 0;
}