// Write a program to find whether a given character is a Vowel or consonant. A character is taken as input. The character may be in Upper Case or in Lower Case.

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch); 

    // **** CODE ****

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')   // CHECK IF THE INPUT IS IN LOWER CASE VOWELS
    {
        printf("%c is a vowel.", ch);
    }else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')    // CHECK IF THE INPUT IS IN UPER CASE VOWELS
    {
        printf("%c is a vowel.", ch);
    }else
    {
        printf("%c is a consonant.", ch);   // IF NOT A VOWEL
    }
    
    return 0;
}
// **** CODE ****
