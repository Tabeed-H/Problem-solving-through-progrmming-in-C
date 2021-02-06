// The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not.
// If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is 
// equilateral, isosceles, scalene or a right-angled triangle.
// (If it is a right-angled triangle then only print Right-angle triangle do not print it as Scalene Triangle).

/*  CONCEPT USED
    Basic propertise of triangles
    1. A triangle is only possible if the sum of its any two sides is greater than the third side.
    2. When all the sides of a triangle are equal the triangle formed is an EQUILATERAL TRIANGLE.
    3. If any two side of a triangle are equal the triangle formed is an ISOSCELES TRIANGLE.
    4. Using pythagorus theorm we can check is a triangle is a RIGHT-ANGLED TRIANGLE.
    5. If a triangle is possible and no side are equal the triangle formed is a SCALENE TRIANGLE.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // **** CODE ****


    // Check if triangle is possible
    if((a + b > c) && (b + c > a) && (a + c > b))
    {
        
        // Check for Equilateral triangle
        if(a == b && b == c && a == c)
        {
            printf("Equilateral Triangle");
        }else if (a == b || b == c || a == c)   // Check for Isoscles triangle
        {
            printf("Isosceles Triangle");
        }else if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))    // Check for Right-Angled Triangle
        {
            printf("Right-angle Triangle");
        }else   // Default
        {
            printf("Scalene Triangle");
        }
        
    }else
    {
        printf("Triangle is not possible");
    }
 return 0;   
}
// **** CODE ****
