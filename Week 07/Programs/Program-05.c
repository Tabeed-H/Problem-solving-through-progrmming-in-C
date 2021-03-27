/*  Write a C program to print Largest and Smallest Word from a given sentence. 
    If there are two or more words of same length, then the first one is considered. 
    A single letter in the sentence is also consider as a word
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]={0},substr[100][100]={0}; 
    //str[100] is for storing the sentence and substr[50][50] is for storing each word.

    scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

//    **** CODE ****

    int strIterator = 0;    // Used for Indexing the input string starting from 0
    int j, i =0;            // Loop iterators
    int maxWord;            // Size of the Longest word
    int minWord;            // Size of the Shortest Word
    int maxWordIndex = 0;   // Index at which the longest word is present in the Substr
    int minWordIndex = 0;   // Index at which the Shortest word is present in the Substr


    // Logic for removing the full stop at the end of the Input Sentance
    if(str[strlen(str) - 1] == '.')
    {
        str[strlen(str) - 1] = '\0';
    }

   while(str[strIterator] != '\0')       //for splitting sentence 
    {
        j = 0;

        // Getting the word from the sentance 
        // splitting at the space for the inside words and at the null operator for the word at the end
        while(str[strIterator] !=' ' && str[strIterator] != '\0')
        {
            substr[i][j] = str[strIterator];
            strIterator++;
            j++;
        }

        // Changing the simple character array into a string array by placing the null character at the end
        substr[i][j] = '\0';
        i++;

        // Omitting the space encountered after each word
        if(str[strIterator] ==' ')
        {
            strIterator++;
        }        
    }

    maxWord = strlen(substr[0]);    // Setting the Longest word as the first word in the subArray 
    minWord = strlen(substr[0]);    // Setting the Shortest word as the first word in the subArray

    // Iterating through the subArray or Substring
    for(int k = 0; k < i; k++)
    {
        // If there is a word longer than the previously set longest word
        if(maxWord < strlen(substr[k]))
        {
            maxWord = strlen(substr[k]);    // Storing the size of the longest word for comparison
            maxWordIndex = k;               // Storing the index of the longest word
        }

        // If there is a word shorter than the previosly set shortest word
        if(minWord > strlen(substr[k]) )
        {
            minWord = strlen(substr[k]);    // Storing the size of the shortest word for comparison
            minWordIndex = k;               // Storing the indez of the shortest word
        }
    }

    // Printing out to the console
    printf("Largest Word is: %s\nSmallest word is: %s\n", substr[maxWordIndex],substr[minWordIndex]);

    return 0;
}

// **** CODE ****