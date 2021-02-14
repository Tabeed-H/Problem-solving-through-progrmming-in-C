// Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
// For example 8 can be expressed as 2^3.
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    // **** CODE ****
    int loopCounter = N;        // Transfers the value of N as N is required in the later part of the program
    int counter = 0;            // store the exponent value
    int iteratedNumber = 2;     // For checking the answer (iteratedNumber)^counter should be equal to N

    while(loopCounter != 1)
    {
        int checkDivisibility = loopCounter % 2;        // If the number is divisible by 2 will return 0

        if(!checkDivisibility)      // Same as checkDivisiblity == 0
        {
            loopCounter = loopCounter / 2;      // Divides the number by 2
            ++counter;      // Increases the count
        }else
        {
            printf("%d cannot be expressed as power of 2.",N);      // If at any point the number N is not divisible by 2 that means it cannot be represented as a power of 2
            break;      // Breaks out of the loop
        }
    }

    // Loop to check whether our answer is correct
    // THIS IS AN EXTRA STEP JUST TO BE SURE
    for(int i = 1; i < counter; i++)
    {
        iteratedNumber = iteratedNumber * 2;
    }

    if(N == iteratedNumber)
        printf("%d is a number that can be expressed as power of 2.",N);
    
    return 0;        
}
