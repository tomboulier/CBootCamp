// gcc -std=c99 -o fib 6_3.c

#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("syntax: fib <n>\n");
	}
	else{
		int n;
		n = atoi(argv[1]);
	  printf("fib(%d)=%d\n", n, fib(n));
	}

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
