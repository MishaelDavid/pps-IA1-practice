
#include <stdio.h>
int input(int *a, int *b)
{ 
  printf("enter two numbers\n");
  scanf("%d%d",a,b);
  return 0;
}

int add(int a, int b, int *sum)
{
  *sum=a+b;
  return 0;
}

int output(int a, int b, int c)
{
  printf("%d + %d is %d",a,b,c);
  return 0;
}

int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0; 
}