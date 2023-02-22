#include <stdio.h>

int main() {
  int row, col, i, j;
  int matrix1[5][5], matrix2[5][5], sum[5][5];

  printf("Enter rows and columns for the matrices: ");
  scanf("%d %d", &row, &col);

  printf("Enter the elements of first matrix: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the elements of second matrix: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Compute the sum of the two matrices
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Display the sum of the two matrices
  printf("The sum of the two matrices is: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}