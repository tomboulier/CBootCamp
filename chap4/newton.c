#include "stdio.h"

int main(int argc, char const *argv[])
{
    double n = 612, res=10;

    for (int i = 0; i < 5; ++i)
    {
    	printf("x%d = %f, ", i, res);
    	res = res - (res*res - 612) / (2*res);
    	printf("x%d = %f\n", i+1, res);
    }

    printf("Square root of 612 is %f\n", res);
	return 0;
}