/*Write a program to find gcd (hcf) of two numbers.
int input();
int gcd(int a, int b);
void output(int a, int b, int gcd); input: 12 16 output 4*/
#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
 int count=0, f=1;
  while(f<=n)
    {
      if(n%f==0)
        count++;
        f++;
    }
  return count;
}

int gcd(int a, int b)
{
  if(is_composite(a) > 2 && is_composite(b) > 2 )
  {
    if (a == 0)
      return b;
    else if (b == 0)
      return a;
    else if (a == b)
      return a;
    else if (a > b)
      return gcd(a-b, b);
    else    
      return gcd(a, b-a);
  }
  else
  {
    return 1;
  }
}
void output(int a, int b, int gcd_result)
{
  printf("The GCD of %d and %d is %d\n",a,b,gcd_result);
}
int main()
{
  int a,b,gcd_result;
  a=input_number();
  b=input_number();
  gcd_result=gcd(a,b);
  output(a,b,gcd_result);
  return 0;
}