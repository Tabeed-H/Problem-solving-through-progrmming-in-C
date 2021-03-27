//Write a program to check whether a given number(int) is Even or Odd
#include <stdio.h>

int main()
{
    int number;
    scanf("%i", &number);

    // **** CODE ****
    
    // A even number is always divisible by 2 given the remainder 0
    // the % operator gives the remainder when two numbers are divided
    if((number % 2) != 0)
    {
        printf("%d is odd.", number);
    }else
    {
        printf("%d is even.", number);
    }

    return 0;
    
}

    // **** CODE ****