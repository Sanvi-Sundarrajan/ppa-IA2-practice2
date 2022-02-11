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
int gcd(int a, int b)
{
  while(b!=0)
  {
    gcd=a%b;
    a=b;
    b=gcd;
  }
  return gcd;
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