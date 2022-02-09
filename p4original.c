/*Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void out_put(int sum);
input:
1 2 7 8 12
output:
20
*/
#include <stdio.h>
int input_array_size()
{
  int n;
  printf ("Enter the array size \n");
  scanf ("%d", &n);
  return n;
}
void input_array (int n, int a[n])
{
  int i;
  printf("Enter the the number\n");
  for (i = 0; i < n; i++)
  scanf("%d",&a[i]);
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
  if (count>2)
  return 1;
}
int sum_composite_numbers (int n, int a[n])
{
  int i,sum=0;
    for(i=0;i<n;i++)
    if (is_composite(a[i])==1)
    sum+=a[i];
    return sum;
}
void output (int sum)
{
  printf ("Sum=%d\n", sum);
}
int main ()
{
  int n = input_array_size ();
  int a[n];
  input_array (n, a);
  int sum = sum_composite_numbers (n, a);
  output (sum);
  return 0;
}
