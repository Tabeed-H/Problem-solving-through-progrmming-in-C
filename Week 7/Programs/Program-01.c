// Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.
#include<stdio.h>
int main() {
    int upper = 0, lower = 0;
    char ch[100];
    scanf(" %[^\n]s", ch);

    // **** CODE *****
    
    int i = 0;
    while (ch[i] != 0)
    {
        if((int)ch[i] >= 65 && (int)ch[i] <= 91)
        {
            ++upper;
        }
        if((int)ch[i] >= 97 && (int)ch[i] <= 122)
        {
            ++lower;
        }
        ++i;

    }
    
    // **** CODE *****
    printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
    printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}