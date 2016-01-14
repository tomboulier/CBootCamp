// gcc -o go.o 5_2_go.c

#include <stdio.h>

int isprime(int n);

int main(int argc, char *argv[])
{
  printf("isprime(%d)=%d\n", 1, isprime(1));
  printf("isprime(%d)=%d\n", 12, isprime(12));
  printf("isprime(%d)=%d\n", 17, isprime(17));
  return 0;
}

int isprime(int n) {
	if(n == 1) return 0; // convention
	for (int i = 2; i*i <= n; ++i)
	{
		if ((n % i) == 0) return 0;
	}
	return 1;
}