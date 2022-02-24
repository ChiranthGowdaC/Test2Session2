#include <stdio.h>
#include <math.h>
int input_number()
{
  int num;
  printf("enter a num\n");
  scanf("%d",&num);
  return num;
  
}
int is_prime(int n)
{
  for (int i=2;i<sqrt(n);i++)
    { if((n%i) ==0)
      return 0;
      }
  return 1;
}
void output(int n,int is_prime)
{
if (is_prime)
  printf(" %d is a prime number\n",is_prime);
 else
  printf("%d is not a prime number\n",is_prime);
  
}
int main()
{
  int n,a;
  n=input_number();
  a=is_prime(n);
  output(n,a);
  return 0;
}
