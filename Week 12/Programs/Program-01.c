// Write a program in C to find the factorial of a given number using pointers.

#include <stdio.h>
void findFact(int, long int*);
int main()
{
    long int fact; //factorial of the number
    int num1; 
    scanf("%d",&num1); //The number is taken from test data

        findFact(num1, &fact);
        printf("The Factorial of %d is : %ld\n",num1, fact);
        return 0;
}

// **** CODE ****

void findFact(int num , long int* fact)
{
    *fact = 1;
    for(int i = num; i > 0; i-- )
    {
        *fact = *fact * i;
    }
}

// **** CODE ****
