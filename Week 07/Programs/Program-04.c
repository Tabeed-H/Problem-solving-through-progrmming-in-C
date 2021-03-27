// Write a C program to print lower triangle of a square matrix.

#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r;
    
    scanf("%d", &r); //Accepts number of rows or columns

        for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
        {
            for(j=0;j<r; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }

    // **** CODE ****

    // LOGIC
    // The difference btw the upper triangle of the matrix will alway be less than 0
    for(i = 0;i < r;i++) 
    {
        for(j = 0;j < r; j++)
        {
            if((i -j) < 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Printing the modified Matrix to the console
    for(i = 0;i < r;i++) 
    {
        for(j = 0;j < r; j++)
        {
            printf("%d ",matrix[i][j]);
        }

        printf("\n");
    }
    return  0;
}

// **** CODE ****