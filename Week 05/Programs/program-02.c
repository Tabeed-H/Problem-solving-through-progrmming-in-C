// Write a C program to count total number of digits of an Integer number (N).

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    // **** CODE ****
    int loopCounter = N;
    int count = 0;
    while ( loopCounter!= 0)
    {
        loopCounter = loopCounter / 10;
        ++count;
    }

    printf("The number %d contains %d digits.",N,count);
    
    return 0;
}