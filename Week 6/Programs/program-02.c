// Write a C Program to print the array elements in reverse order (Not reverse sorted order. Just the last element will become first element, second last element will become second element and so on)
#include<stdio.h>
 
int main() {
    int arr[20], i, n;
    
    scanf("%d", &n); /* Accepts the number of elements in the array */

    for (i = 0; i < n; i++) 
    {
         scanf("%d", &arr[i]); /*Accepts the elements of the array */
    }

    // **** CODE ****
    int startIndex = 0;
    int endIndex = n;
    while( endIndex > startIndex)
    {
        int firstDigit = arr[startIndex];
        int lastDigit = arr[endIndex-1];

        arr[endIndex-1] = firstDigit;
        arr[startIndex] = lastDigit;

        endIndex--;
        startIndex++;

    }
    // **** CODE ****

    for (i = 0; i < n; i++) 
    {
      printf("%d\n", arr[i]); // For printing the array elements 
    }
 
   return (0);
}
