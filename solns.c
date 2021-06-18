/* Enter your solutions in this file */
/*Q1. Program to find largest integer in array*/
#include <stdio.h>
int max(int [], int);

int main(void)
{
  int x[] = {9,5,6,10,2,-3,4};
  int n = sizeof(x)/sizeof(x[0]);
  printf("No:%d\n",n);
  int y = max(x,n);
  printf("The largest integer in the array is: %d",y);
  return 0;
}
int max(int x[], int n)
{
    int z, res;
    for(int i =0; i<n; i++)
    {
        for(int j=0 ; j<n-i; j++)
        {
        if(x[i]>x[j])
         z = x[i];
        }
        res = z;
    }
    return res;
}
