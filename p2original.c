/*Write a program to find if a triangle is scalene. A triangle is a scalene traingle if all the three sides of the triangle are not equal to each other.

       int input_side()
       int check_scalene(int a, int b, int c)
       void output(int a, int b, int c, int isscalene)
*/
#include <stdio.h>
int input_side ()
{
  int n;
  printf ("Enter the side of triangle\n");
  scanf ("%d", &n);
  return n;
}
int check_scalene (int a, int b, int c)
{
  if ((a!=b)&&(b!=c)&&(a!=c))
    return 0;
  
}
void output (int a, int b, int c, int isscalene)
{
  if (isscalene == 0)
    {
      printf ("The traingle with sides %d,%d,%d is scalene\n", a, b, c);
    }
  else
    {
      printf ("The traingle with sides %d,%d,%d is not scalene\n", a, b, c);
    }
}
int main ()
{
  int a, b, c, isscalene;
  a = input_side ();
  b = input_side ();
  c = input_side ();
  isscalene = check_scalene (a, b, c);
  output (a, b, c, isscalene);
  return 0;

}
