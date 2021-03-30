#include<stdio.h>
float f(float x);
float df (float x);

int main()
{
    int itr, maxmitr; // itr is the iteration number and maxitr is the maximum allowable iteration 
    float x0=1.0, x1; // x0 is the initial value and x1 is result 
    scanf("%d", &maxmitr); // Taken from the test cases 



// **** CODE ****

    itr = 0;

    while (itr < maxmitr)
    {
        float h = f(x0) / df(x0);

        x0 = x0 - h;

        itr++;
    }
     
     x1 = x0;
     printf("Root = %8.6f\n", x0);
}

float f(float x)
{
    return x*x*x -2*x - 3;
}

float df(float x)
{
    return 3*x*x - 2;
}

// **** CODE ****