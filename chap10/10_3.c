#include <stdio.h>
#include <string.h>

#define MAXSTRING 256

void fprintToUpperReversed(char str[], FILE *f){
	char c;
	for (int i = strlen(str)-1; i >= 0 ; --i)
	{
		c = str[i];
		if ((c >= 97) & (c <= 122)){
			fprintf(f,"%c", c-32);
		}
		else{
			fprintf(f,"%c",c);
		}
	}
	fprintf(f,"\n");
}

int main(int argc, char *argv[]){
	char s1[MAXSTRING], s2[MAXSTRING], s3[MAXSTRING];

	printf("Enter 3 strings: ");
	scanf("%s %s %s",s1,s2,s3);

	FILE *f ;
	f = fopen("outfile.txt", "a");

	if(f == NULL) {
		printf("Error opening outfile.txt\n");
		return 1;
	}

	fprintToUpperReversed(s1,f);
	fprintToUpperReversed(s2,f);
	fprintToUpperReversed(s3,f);

	fclose(f);

	return 0;
}