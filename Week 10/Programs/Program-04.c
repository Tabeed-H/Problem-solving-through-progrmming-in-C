// Write a C program to sort a 1D array using pointer by applying Bubble sort technique.

#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); // Enter number of elements to sort is taken from test case data
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // The elements of the array is taken from the test data
    }

sort(a, n); // Calling the sorting function

    //Printing the sorted array 
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}


// **** CODE ****

void sort(int *a , int n)
{
    for(int i = 0; i < n -1 ; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

// **** CODE ****