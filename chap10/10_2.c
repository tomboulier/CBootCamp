#include <stdio.h>
#include <string.h>

#define MAXSTRING 256

void printToUpperReversed(char str[]){
	char c;
	for (int i = strlen(str)-1; i >= 0 ; --i)
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
	printToUpperReversed(s1);
	printToUpperReversed(s2);
	printToUpperReversed(s3);

	return 0;
}