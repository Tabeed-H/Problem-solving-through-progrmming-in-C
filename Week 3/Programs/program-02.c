// Write a program to check if  a given number is Zero or Positive or Negative using IF-ELSE statement
#include <stdio.h>

int main()
{
    double number;
    scanf("%lf", &number);

    // **** CODE ****

    if(number != 0)     //checks if number is zero or not
    {
        //if not zero

        if(number > 0)     //check if number is greater than 0
        {
            //if greater than 0
            printf("Positive number.");
        }else
        {
            //if less than 0
            printf("Negative number.");
        }
    }else
    {
        // if 0
        printf("The number is 0.");
    }

    return 0;
}

    // **** Code ****