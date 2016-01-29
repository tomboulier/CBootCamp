#include "stdio.h"
#include "stdlib.h"

typedef struct
{
	int x;
	int y;
}point;

void print_point(point p){
	printf("(%d,%d)\n",p.x,p.y);
}

int main() {


	point *mylist = calloc(10,sizeof(point));

	for (int i = 0; i < 10; ++i)
	{
		mylist[i].x = 2*i;
		mylist[i].y = 3*i*i - 2 ;
	}

	for (int i = 0; i < 10; ++i)
	{
		print_point(mylist[i]) ;
	}

	free(mylist);
	
	return 0;
}