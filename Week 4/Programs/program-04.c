// Write a C program to calculate the Sum of First and the Last Digit of a given Number. For example if the number is 1234 the result is 1+4 = 5.

#include <stdio.h>

int main()
{
    int N, First_digit, Last_digit;
    scanf("%d", &N); 
    
    // **** CODE ****

    Last_digit = N % 10;
    while(N > 10)
    {
        N =  N / 10;
    }

    First_digit = N;

    // **** CODE ****
    printf("Sum of First and Last digit = %d", First_digit + Last_digit);

return 0;
}