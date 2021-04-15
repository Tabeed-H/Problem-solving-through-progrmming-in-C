// Write a C program to store n elements using Dynamic Memory Allocation - calloc() and find the Largest element


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;
    scanf("%d", &n); //Total number of elements


    // **** CODE ****

    element = (float *)calloc(n,sizeof(float));

    for(int i = 0; i < n; i++)
    {
        scanf("%f", element + i);
    }

    float largest = *element;

    for(int i = 0; i < n ; i++)
    {
        if(*(element + i) > largest)
            largest = *(element + i);
    }

    printf("Largest element = %.2f\n", largest);

    return 0;
}

// **** CODE ****