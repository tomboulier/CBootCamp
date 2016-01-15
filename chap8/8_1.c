//gcc 8_1.c

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  double *data;
  int nrows;
  int ncols;
} Matrix;

void printmat(Matrix *M);
void matrixmult(Matrix *A, Matrix *B, Matrix *C);
Matrix *createMatrix(int nrows, int ncols);
void destroyMatrix(Matrix *M);

int main(int argc, char *argv[])
{
  Matrix *A = createMatrix(3, 2);
  A->data[0] = 1.2;
  A->data[1] = 2.3;
  A->data[2] = 3.4;
  A->data[3] = 4.5;
  A->data[4] = 5.6;
  A->data[5] = 6.7;
  printmat(A);

  Matrix *B = createMatrix(2, 3);
  B->data[0] = 5.5;
  B->data[1] = 6.6;
  B->data[2] = 7.7;
  B->data[3] = 1.2;
  B->data[4] = 2.1;
  B->data[5] = 3.3;
  printmat(B);

  Matrix *C = createMatrix(3, 3);
  matrixmult(A, B, C);
  printmat(C);

  destroyMatrix(A);
  destroyMatrix(B);
  destroyMatrix(C);
  return 0;
}

// your code goes below...


Matrix *createMatrix(int nrows, int ncols)
{
  Matrix *M;
  M = malloc(sizeof(Matrix));

  (*M).nrows = nrows ;
  (*M).ncols = ncols ;

  (*M).data = calloc(nrows*ncols,sizeof(double));
  return M;
}

void destroyMatrix(Matrix *M)
{
  // fill in the code here
}

void printmat(Matrix *M)
{
    printf("[");

  for(int i = 0 ; i < (*M).ncols*(*M).nrows ; i++){
    if( ((i%(*M).ncols) == 0) & (i != 0)) printf("\n");
    printf("%.3f ",(*M).data[i]);
  }

  printf("\b]\n");
}

void matrixmult(Matrix *A, Matrix *B, Matrix *C)
{
  // (*C) = (*A) * (*B)
    // remplissage de la matrice
  // C_{ij} = \sum_k A_{ik} B_{kj}

  for(int i = 0; i < (*A).nrows ; i++){
    for(int j = 0 ; j < (*B).ncols ; j++){     
      //double tmp = 0;
      for(int k = 0 ; k < (*A).ncols ; k++){
        (*C).data[i*(*C).ncols+j] += (*A).data[i*(*A).ncols+k]*(*B).data[k*(*B).ncols+j];
      }
    }
  }
}
