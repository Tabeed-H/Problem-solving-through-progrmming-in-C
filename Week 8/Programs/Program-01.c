// Write a C Program to find HCF of 4 given numbers using recursive function
#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}


// ************************************************
//          EUCLIDEAN ALGORITHM
// ***********************************************
/*  GCD of two numbers is the largest number that divides both of them.
    Basic Euclidean Algorithm for GCD 
    The algorithm is based on the below fact. 
    " If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change.
        So if we keep subtracting repeatedly the larger of two, we end up with GCD."
*/

// **** CODE ****

int HCF(int a, int b)
{
    // Base Cases
    if(a == b)
        return a;
    if(a == 0)
        return b;
    if(b == 0)
        return a;

    // Applying EUCLIDEAN ALGORITHM
    if( a > b)
        return HCF(a -b, b);
    
    return HCF(a, b -a);
}

// **** CODE ****