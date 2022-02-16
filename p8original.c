#include<stdio.h>
float input()
{
  float x;
  printf("enter the number : \n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float n)
{
  float sqrt;
  float a=n/2;
  float a2=n;
  while(a2!=a)
  {
    a2=a;
    a=(a+(n/a))/2;
  }
  return a;
}
void output(float n ,float sqrt_result)
{
  printf("square root of %f is %f\n",n,sqrt_result);
}
int main ()
{
  float n ,sqrt_result;
  n= input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
}