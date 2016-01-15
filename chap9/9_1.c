#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char toUpper(char c){
	if ((c >= 97) & (c <= 122)) return c-32;
	return c;
}
void printToUpper (char str[]){
	//printf("%s", c);
	for (int i = 0; i < strlen(str); ++i)
	{
		printf("%c", toUpper(str[i]));
	}
}

int main(int argc, char *argv[])
{
  char *provinces[] = { "British Columbia", "Alberta", "Saskatchewan", 
                        "Manitoba", "Ontario", "Quebec", "New Brunswick",
                        "Nova Scotia", "Prince Edward Island", "Newfoundland",
                        "Yukon", "Northwest Territories", "Nunavut" };
  for (int i=0; i<13; i++) {
    printf("provinces[%d] = ", i);
    printToUpper(provinces[i]);
    printf("\n");
  }
  return 0;
}