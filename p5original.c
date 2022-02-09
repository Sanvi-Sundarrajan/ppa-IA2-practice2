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
void output(int a, int b, int gcd_result)
{
  printf("The GCD of %d and %d is %d",a,b,gcd_result);
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