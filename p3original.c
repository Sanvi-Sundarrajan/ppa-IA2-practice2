/*Write a program find whether a number is a composite number. A Composite number has a factor other than 1 and itself
int input_number();
int is_composite(int n);
void output(int n, int composite);
input:
8
output:
8 is a composite number.

*/
#include<stdio.h>
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
void output(int n, int composite)
{
  if(composite>2)
    printf("The number %d is a Composite\n",n);
  else
    printf("The number is not Composite\n") ;
}
int main ()
{
int n=input_number();
int composite= is_composite(n);
output(n,composite);
return 0;
}