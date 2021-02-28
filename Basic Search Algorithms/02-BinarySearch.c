/*  Binary Search: Search a sorted array by repeatedly dividing the search interval in half. 
    Begin with an interval covering the whole array.
    If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
    Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

    THE ARRAY NEEDS TO BE IN ASCENDING ORDER AND ALWAYS SORTED
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sample Array
    int arr[] = {10,22,32,41,56,64,69,71,83,99};

    // "n" is the size of the array
    // "found" defines the state of the search
    int n = 10, found = 0;

    // "lowerBound" is the starting index of the array on which the search operation is going on;
    // "higherBound" is the last index of the array on which the search operation is going on;
    int lowerBound = 0;
    int higherBound = n - 1;

    // sample example to find in the array
    int num = 99;

    while(lowerBound  <= higherBound)
    {
        // To find the mid index of the current array in operation;
        int middle = (lowerBound + higherBound) / 2;

        // Check if the number to find in the array is greater than less than the element at index middle
        // or to check if the number to find is to the left of the element at index middle arr[middle]
        if(num < arr[middle])
        {
            // if number to find is to the left or less than the elemetn arr[middle] the higherbound of the next array will be one less than the current middle index
            // for first iteration lower index is same 0
            higherBound = middle - 1;
        }else if (num > arr[middle])
        {
            // if number to find is to the right or greater than element arr[middle] the lowerbound of the next array will be one greater than the current muddle index
            // for first iteration higher index remain same as previous ie "n"
            lowerBound = middle + 1;
        }else if (num = arr[middle])
        {
            // if number to find is same as the elemnt at arr[middle] 
            printf("found");
            // increases to a truthy value
            ++found;
            // breaks out of loop
            break;
        }
    }

    
    if(!found)
    {
        printf("fucked up");
    }
    return 0;
}