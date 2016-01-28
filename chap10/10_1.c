#include <stdio.h>
#include <string.h>

void printToUpper(char str[]){
	char c;
	for (int i = 0; i < strlen(str); ++i)
	{
		c = str[i];
		if ((c >= 97) & (c <= 122)){
			printf("%c", c-32);
		}
		else{
			printf("%c",c);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[]){
	char s[256];

	gets(s);
	printToUpper(s);

	return 0;
}