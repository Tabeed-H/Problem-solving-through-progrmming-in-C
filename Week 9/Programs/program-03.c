// Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm. The index location starts from 1.

#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

// **** CODE ***

int found = 0;

int lowerBound = 0;
int higherBound = n - 1;

while(lowerBound <= higherBound)
{
    int mid = (lowerBound + higherBound) / 2;

    if(search > array[mid])
        lowerBound = mid + 1;
    else if(search < array[mid])
        higherBound = mid - 1;
    else if(search == array[mid])
    {
        printf("%d found at location %d.\n", search, mid+1);
        found = 1;
        break;
    }
}

if(!found)
    printf("Not found! %d isn't present in the list.\n", search);

return 0;

}

// **** CODE ****