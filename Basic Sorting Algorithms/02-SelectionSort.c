#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {4,2,6,8,1,9,3,5,7,0};
    int n = 10;
    int min;
    int i, j;

    printf("Before Sorting \n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("\n");
    printf("After Sorting \n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}