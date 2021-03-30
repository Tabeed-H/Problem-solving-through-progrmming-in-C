// Write a C code to check if a 3 x 3 matrix is invertible. A matrix is not invertible if its determinant is 0.

#include<stdio.h>
 int main()
{
  int a[3][3], i, j;
  long determinant;
 //  9 elements of matrix is taken as input from test data
  for(i = 0 ; i < 3; i++)
      for(j = 0; j < 3; j++)
           scanf("%d", &a[i][j]);


// **** CODE ****

determinant = 0;

for(int i = 0; i < 3; i++)
    determinant = determinant + (a[0][i] * ((a[1][(i + 1) % 3] * a[2][(i + 2) % 3]) - (a[1][(i + 2) % 3] * a[2][(i + 1) % 3])));


if(determinant)
    printf("The given matrix is invertible");
else
    printf("The given matrix is not invertible");
}


// **** CODE ****