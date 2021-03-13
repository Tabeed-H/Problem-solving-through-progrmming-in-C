// Write a C Program to reverse a given word using function
#include <stdio.h>
#include <string.h>

void reverse(char[], int, int);
int main()
{
    char str1[20];
    scanf("%s", str1);

// **** CODE ****

    int sizeOfString = strlen(str1);    // gets the size of the string
    int endIndex = strlen(str1) -1;     // gets the end index of the string

    reverse(str1, sizeOfString, endIndex);  // function call

    // prints the string after modification
    printf("The string after reversing is: %s", str1); 
    return 0;
}


void reverse(char str1[], int sizeOfString, int endIndex)
{
    int i = 0;

    // swap logic
    while (i < endIndex)
    {
        char temp = str1[i];
        str1[i] = str1[endIndex];
        str1[endIndex] = temp;

        i++;
        endIndex--;
    }
}