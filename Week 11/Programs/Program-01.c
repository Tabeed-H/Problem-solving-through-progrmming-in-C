#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases

// **** CODE ****

    int n = 5;  //Size of the given array
    float k = 0;    // Initialize sum as 0;

    for(int i = 0 ;i < n; i++)
    {
        float temp = 1;
        int z = i;      // to store the value of current iteration
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                
                temp = temp * (a - t[j]) / (t[z] - t[j]);
            }
        }

        k = k + v[i] * temp;
    }

// **** CODE ****


  printf("The respective value of the variable v is: %.2f", k);
  return 0;
}
