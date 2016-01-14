#include <stdio.h>

int main(){
	for (int i = 1; i < 100; ++i)
	{
		int fb=0;
		if ((i % 3) == 0)
		{
			printf("Fizz");
			fb = 1;
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
			fb = 1;
		}
		
		if (fb == 1)
		{
			printf("\n");
		}
		else
		{
			printf("%d\n", i);
		}
		
	}
	return 0;
}