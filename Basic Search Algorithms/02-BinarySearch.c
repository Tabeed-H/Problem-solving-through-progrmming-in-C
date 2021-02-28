#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10,22,32,41,56,64,69,71,83,99};
    int n = 10, found = 0;

    int lowerBound = 0;
    int higherBound = n - 1;
    int num = 99;

    while(lowerBound  <= higherBound)
    {
        int middle = (lowerBound + higherBound) / 2;
        if(num < arr[middle])
        {
            higherBound = middle - 1;
        }else if (num > arr[middle])
        {
            lowerBound = middle + 1;
        }else if (num = arr[middle])
        {
            printf("found");
            --found;
            break;
        }
    }
    if(!found)
    {
        printf("fucked up");
    }
    return 0;
}