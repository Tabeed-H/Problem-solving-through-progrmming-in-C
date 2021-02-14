// Write a C program to check whether a given number (N) is a perfect number or not?
// [Perfect Number - A perfect number is a positive integer number which is equals to the sum of its proper positive divisors.
// For example 6 is a perfect number because its proper divisors are 1, 2, 3 and it’s sum is equals to 6.]
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    // **** CODE ****
    int factorSum = 0;
    for(int i = 1; i < N; i++)
    {
        if(N % i == 0)
        {
            factorSum = factorSum + i;
        }
    }

    if(factorSum == N)
    {
        printf("%d is a perfect number.\n",N);
    }else
    {
        printf("%d is not a perfect number.\n",N);
    }
    
    return 0;
}
// **** CODE ****