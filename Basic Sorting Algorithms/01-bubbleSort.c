#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3,5,2,7,8,1,9,0,4,6};  // Sample array
    int n = 10; // Sample array size
    int i, j; // Loop counters

    // Print array before sorting
    printf("Before sorting \n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // Sorting Logic
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j +1];

                arr[j +1] = temp;
            }
        }
    }

    // Print an empty line
    printf("\n");

    // Print the array after sorting
    printf("After sorting \n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}