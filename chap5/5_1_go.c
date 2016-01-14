// gcc -o 5_1_go.o 5_1_go.c

#include <stdio.h>

int fib(int n);

int main(int argc, char *argv[])
{
  printf("fib(%d)=%d\n", 10, fib(10));
  return 0;
}

int fib(int n) {
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}

  int f0,f1,f2;

  f0 = 0;
  f1 = 1;

  for (int i = 2; i <= n; ++i)
  {
  	f2 = f0 + f1;
  	f0=f1;
  	f1=f2;
  }

  return f2;
}