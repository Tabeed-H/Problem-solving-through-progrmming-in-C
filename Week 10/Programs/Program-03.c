// Write a C program to sort a given 1D array using pointer in ascending order.
#include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }

// **** CODE ****

for(int i = 0; i < n -1 ; i++)
{
    for(int j = 0; j < n - 1; j++)
    {
        if(*(a + j) > *(a + j + 1))
        {
            int temp = *(a + j + 1);
            *(a + j + 1) = *(a + j);
            *(a + j)= temp;
        }
    }
}

// **** CODE ****

//   Printing sorted array in ascending order 
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }