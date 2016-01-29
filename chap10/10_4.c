#include <stdio.h>
#include <string.h>

void printReverse(char str[]){
	for(int i = strlen(str)-1 ; i >=0 ; i-- ){
		printf("%c", str[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]){
	FILE *fp ;

	fp = fopen("infile.txt","r");

	if(fp == NULL){
		printf("Error reading infile.txt\n");
		return 1;
	}

	char str[256];

	for(int i = 0 ; i < 3 ; i++){
		fscanf(fp,"%s\n",str);
		printReverse(str);
	}

	return 0;
}