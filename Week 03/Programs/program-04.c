// Write a C Program to find the Largest Number (integer) among Three Numbers (integers) using IF and Logical && operator.
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);

    // **** CODE ****
    // When both the conditions in a AND logic are true then the whole condition will be true

    if( n1 > n2 && n1 > n3)     // Check the number 1 with all other number
    {
        //if true
        printf("%d is the largest number.", n1);
    }else if (n2 > n1 && n2 > n3)   // Check the number 2 with all othr numbers
    {
        //if true
        printf("%d is the largest number.", n2);
    }else
    {
        // if all the above conditions are false
        printf("%d is the largest number.", n3);
    }
    
    return 0;
}