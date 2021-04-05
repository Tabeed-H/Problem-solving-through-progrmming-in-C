#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

// **** CODE ****

    float h = (b - a) / n;
    float sum = 0;

    for(int i = 1; i < n;i++)
    {
        float x = a + i * h;
        sum = sum + func(x);
    }

    integral = (h / 2) * (func(a) + func(b) + (2 * sum));
    printf("The integral is: %0.6f\n",integral);


    return 0;
}

float func(float x)
{
    return x * x;
}

// **** CODE ****