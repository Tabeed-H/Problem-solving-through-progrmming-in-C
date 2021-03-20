// Write a C program to reverse an array by swapping the elements and without using any new array.

#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }

// **** CODE ****
    int lowerBound = 0;
    int higherBound = n-1;

    while (lowerBound < higherBound)
    {
        int temp = array[lowerBound];
        array[lowerBound] = array[higherBound];
        array[higherBound] = temp;

        lowerBound = lowerBound + 1;
        higherBound = higherBound - 1;
    }
    

// **** CODE ****

  printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}
