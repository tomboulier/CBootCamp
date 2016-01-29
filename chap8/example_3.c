#include <stdio.h>
#include "stdlib.h"

int main() {
	typedef struct
	{
		int year;
		int month;
		int day;
	} date;

	date * today ;
	today = malloc(sizeof(date));

	today -> day = 16;
	today -> month = 05;
	today -> year = 1987;

	printf("Ton anniversaire est le %d/%d/%d.\n", today->day, today->month, today->year);

	free(today);

	return 0;
}