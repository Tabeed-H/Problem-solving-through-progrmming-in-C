/*  Linear Search is used to search for an element in an UNSORTED array of size n;
    Search begins at index[0] to the last index comparing the element to find with every element in the array;
    if found returns either the position or index of the element or just a ELEMENT FOUND print statement;
    if not found returns -1 or ELEMENT NOT FOUND print statement;
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // found is a variable that defines the state of the search
    // n is the size of the array
    // i is the loop counter
    int found = 0, n = 10, i;

    // sample unsorted array 
    int arr[n] = {2,5,1,7,3,8,9,6,4,0};

    // Number to find in the array
    int num = 7;

    // Logic for the search
    // The loop runs for the entire range or size comparing each element in the array with the num we need to find
    for(i = 0; i < n; i++)
    {
        if(num == arr[i])
        {
            // If the number is found a statement is printed to the console 
            printf("%d is in the array at %d", num, i);
            // changing the value to a truthy value
            found = 1;
        }
    }

    // If not found
    // If the number is not present in the array the value of FOUND will remain a falsy value which is 0
    // !0 = 1  
    // Thus prints the statement to the console

    // if found
    // If the number is present in the array the value of FOUND will change to a truthy value which is 1
    // !1 = 0 
    if(!found)
    {
        printf("%d does not exists in the array");
    }

    return 0;
}