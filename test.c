#include <stdio.h>

int main ()
{
  int grades[5];
  int i;
  for (i=0; i<5; i++) {
    printf("grades[%d]=%d\n", i, grades[i]);
  }
  return 0;
}