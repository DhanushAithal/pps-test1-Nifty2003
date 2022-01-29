#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number to be compared\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a ,int b,int c)
{
  int g;
  if(a>b && a>c)
  {
    g=a;
  }
  else if (b>a && b>c)
  {
     g=b;
  }
  else 
  {
    g=c;
  }
  return g;
}
void output(int g)
{
  printf("The largest number among these is %d\n",g);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(largest);
  return 0;
}