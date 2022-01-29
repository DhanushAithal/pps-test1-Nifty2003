#include<stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter the three numbers to be compared \n");
  scanf("%d,%d,%d,\n",a,b,c);
}
void cmp(int a ,int b,int c ,int *largest)
{
  if (a>b && a>c)
  {
  *largest = a;
  }
  else if (b>a && b>c)
  {
    *largest=b;
  }
  else
  {
    *largest =c;
  }
}
void output(int largest)
  {
    printf("the greatest numbers among these three is %d\n",largest);
  }
int main()
{
  int a,b,c,largest;
  input(&a,&b,&c);
  cmp(a,b,c,&largest);
  output(largest);
  return 0;
}

