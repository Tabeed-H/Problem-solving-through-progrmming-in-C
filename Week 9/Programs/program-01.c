#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;
   //"search" is the key element to search and 'n' is the total number of element of the array
   // "count" is to store total number of elements

 scanf("%d", &n); //Number of elements is taken from test case

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); // The element to search is taken from test case

// **** CODE ****

int found = 0;
for(int i = 0; i < n; i++)
{
    if(search == array[i])
    {
        count = count + 1;
        printf("%d is present at location %d.\n", search, i+1);
        found = 1;
    }
}

if(!found)
{
    printf("%d is not present in the array.\n", search);
}else
{
    printf("%d is present %d times in the array.\n",search, count);
}

return 0;
}

// **** CODE ****