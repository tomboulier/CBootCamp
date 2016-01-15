// gcc -std=c99 6_1_2_test.c

#include <stdio.h>
#include <stdlib.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int nrows;
  int ncols;
} Matrix;

void printmat(Matrix M);
Matrix matrixmult(Matrix A, Matrix B);

int main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};
  Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3}; 
  printmat(A);
  printmat(B);

  Matrix C = matrixmult(A, B);
  printmat(C);

  return 0;
}

void printmat(Matrix M)
{
  printf("[");

	for(int i = 0 ; i < M.ncols*M.nrows ; i++){
		if( ((i%M.ncols) == 0) & (i != 0)) printf("\n");
		printf("%.3f ",M.data[i]);
	}

	printf("\b]\n");
}

Matrix matrixmult(Matrix A, Matrix B)
{
  // C = A*B

	if(A.ncols != B.nrows) printf("A and B have inconsistent dimensions.\n");

	Matrix C;

	C.nrows = A.nrows;
	C.ncols = B.ncols;

	// remplissage de la matrice
	// C_{ij} = \sum_k A_{ik} B_{kj}
	for(int i = 0; i < A.nrows ; i++){
		for(int j = 0 ; j < B.ncols ; j++){			
			double tmp = 0;
			for(int k = 0 ; k < A.ncols ; k++){
				C.data[i*C.ncols+j] += A.data[i*A.ncols+k]*B.data[k*B.ncols+j];
			}
		}
	}

  return C;
}



