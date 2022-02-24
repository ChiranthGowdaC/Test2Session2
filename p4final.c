#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
  
}
int  find_fabo(int n)
{
  int a=0,b=1,c=0;
  for(int i=0;i<n;i++)
    {
      c=a;
      a=b;
      b=c+a;  
    } 
  return c;
 
}
 void output(int n,int fibo)
{ printf(" nth  term   is %d\n",fibo);
  
}
int main()
{
  int a=input();
  int b=find_fabo(a);
  output(a,b);
  return 0;
}
