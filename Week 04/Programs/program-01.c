// Write a C Program to Find the Smallest Number among Three Numbers (integer values) using Nested IF-Else statement.
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    // **** CODE ****

    if(n1 > n2)
    {
        if(n2 > n3)
        {
            printf("%d is the smallest number.", n3);
        }else
        {
            printf("%d is the smallest number.", n2);
        }
        
    }else if (n2 > n1)
    {
        if(n1 > n3)
        {
            printf("%d is the smallest number.", n3);
        }else
        {
            printf("%d is the smallest number.", n1);
        }
        
    }
    return 0;
}

// **** CODE ****