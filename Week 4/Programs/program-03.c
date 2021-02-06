// Write a program to find the factorial of a given number using while loop.

#include <stdio.h>
int main()
{
    int n;
    long int fact; 
    scanf("%d",&n);

    // **** CODE ****
    
    int iterator = n;
    fact = 1;
    while(iterator > 1)
    {
        fact = fact * iterator;
        iterator--;
    }
    printf("The Factorial of %d is : %ld",n,fact);

}
// **** CODE ****
