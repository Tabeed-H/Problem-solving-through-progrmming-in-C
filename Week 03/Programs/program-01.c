// Write a program to calculate the Area(float) of a circle given it's radius(int);

#include <stdio.h>
#define PI 3.14

void main()
{
    int radius;
    float area;
    scanf("%i", &radius);
 
    // **** CODE ****
    
    area = PI*radius*radius;
    
    // **** CODE ****

    printf("%.2f", area);
}