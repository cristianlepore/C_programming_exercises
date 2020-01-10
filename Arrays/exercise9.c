#include <stdio.h>

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

  //  Matrix C = matrixmult(A, B);
  //  printmat(C);

  return 0;
}


void printmat(Matrix M)
{
  // fill in the code here
  int i, j;
  
  printf("[\n");
  
  for (i=0; i<M.nrows; i++) {
    for (j=0; j<M.ncols; j++) {
      printf("%6.1f ", M.data[i*M.ncols + j]);
    }
    printf("\n");
  }
  printf("]\n\n");
}


Matrix matrixmult(Matrix A, Matrix B)
{
  // fill in the code here
  Matrix C;
  if (A.ncols != B.nrows) {
    printf("error: ncols of A does not equal nrows of B\n");
  }
  else {
    int i, j, k;
    double count;
    for (i=0; i<A.nrows; i++) {
      for (j=0; j<B.ncols; j++) {
	count = 0.0;
	for (k=0; k<A.ncols; k++) {
	  count += A.data[i*A.ncols + k] * B.data[k*B.ncols + j];
	}
	C.data[i*A.nrows + j] = count;
      }
    }
    C.nrows = A.nrows;
    C.ncols = B.ncols;
  }
  return C;
}
