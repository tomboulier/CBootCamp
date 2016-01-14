#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n = 10;

	for (int i = 0; i < n; ++i)
	{
		// la hauteur sera de n
		for (int j = 0; j < (n-i); ++j)
		{
			// on imprime les espaces nécessaires : (n-i)
			printf(" ");
		}
		for (int j = 0; j < (2*i-1); ++j)
		{
			// on imprime les étoiles : 2i-1
			printf("*");
		}
		printf("\n"); // on passe à la ligne
	}

	return 0;
}