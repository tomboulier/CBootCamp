#include <stdio.h>
#include <string.h>

#define MAXSTRING 256

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
	char s1[MAXSTRING], s2[MAXSTRING], s3[MAXSTRING];

	printf("Enter 3 strings: ");
	scanf("%s %s %s",s1,s2,s3);
	printToUpper(s1);
	printToUpper(s2);
	printToUpper(s3);

	return 0;
}