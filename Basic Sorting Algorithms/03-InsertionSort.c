#include <stdio.h>

int main()
{
    int arr[] = {5,3,4,2,1};
    int n = 5;

    for(int i = 1; i < n ; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1 ] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }


    // printing the arry after sorting
    for(int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}