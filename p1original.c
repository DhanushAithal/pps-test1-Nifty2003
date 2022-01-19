#include<stdio.h>
int add()
{
  int num1,num2;
  float sum;
  printf("Enter two numbers \n");
  scanf("%d%d,",&num1,&num2);
  sum = num1+num2;
  printf("Addition of %d+%d is= %f\n",num1,num2,sum);
}
int main()
{
  add();
  return 0;
}
