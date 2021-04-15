// Write a C program to find the sum of two 1D integer arrays ‘A’ and ‘B’ of same size and store the result in another array ‘C’, where the size of the array and the elements of the array are taken as input.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,n;
    scanf("%d", &n);

//  **** CODE ****

    int *a, *b, *c;
    a = (int*)calloc(n, sizeof(int));
    b = (int*)calloc(n, sizeof(int));
    c = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n ; i++)
        scanf("%d", a + i);

    for(int i = 0; i < n ;i++)
        scanf("%d", b + i);

    for(int i = 0; i < n ;i++)
        *(c + i) = *(a + i) + *(b + i);

//  **** CODE ****


    printf("Result is\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(c+i));
    }

}