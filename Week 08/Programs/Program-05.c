// Write a C program to print a triangle of prime numbers upto given number of lines of the triangle.
#include<stdio.h>
 
int prime(int num); //Function to find whether the number is prime or not.
int main() {
   int lines;
   scanf("%d", &lines); //Number of lines of the triangle is taken from test data.

// **** CODE ****

   int num = 2;     // base number

   for(int i = 0; i < lines; i++)   // for columns
   {
       for(int j = 0; j < lines; j++)   // for rows
       {
           if(( i - j) >= 0)    // check where to print
           {

            //    getting a prime number
            while(!prime(num))
            {
            //    increments the number until a prime number is encountered
                num = num + 1;
            }

            printf("%d\t", num);    // prints the number
            num = num + 1;      // increments the number to avoid using the same number again

           } 
       }
       printf("\n");

   }
   return 0;
}

// function checks for prime number
int prime(int num)
{
    int temp = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            temp = temp + 1;
        }
    }

    if(temp > 2)
    {
        return 0;
    }else
    {
        return 1;
    }
    
}

// **** CODE ****