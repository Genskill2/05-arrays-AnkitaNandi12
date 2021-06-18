/* Enter your solutions in this file */
/*Q1. Program to find largest integer in array*/
#include <stdio.h>
int max(int [], int);

int main(void)
{
  int x[] = {9,5,6,10,2,-3,4};
  int n = sizeof(x)/sizeof(x[0]);
  int y = max(x,n);
  printf("The largest integer in the array is: %d",y);
  return 0;
}
int max(int x[], int n)
{
    for (int i = 1; i <= n; i++) 
    {
    if (x[0] < x[i]) 
    {
        x[0] = x[i];
    }
  }
    return x[0];
}
/* Q2. Program to find smallest integer in array*/
int min(int x[], int n)
{
    for (int i = 1; i <= n; i++) 
    {
    if (x[0] > x[i]) 
    {
        x[0] = x[i];
    }
  }
    return x[0];
}
/* Q3. Program to find average of array*/
float avg(int x[], int n)
{
    float y = 0;
    float res;
    for (int i = 0; i < n; i++) 
    {
    y = y+x[i];
    }
    res = y/n;
    return res;
}
