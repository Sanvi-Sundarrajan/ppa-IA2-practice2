/*Write a program to find the area of a triangle using following function signatures.
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
input:
1
2
output:
the area of the traingle with base 1.000000 and height 2.000000 is 1.000000*/
#include <stdio.h>
void input(float *b, float *h)
{
  printf("Enter the base and height of triangle\n");
  scanf("%f%f",b,h);
}
void find_area(float b , float h, float *a)
{
  *a= 0.5*b*h;
}
void output(float b, float h, float a)
{
  printf("The area of the traingle with base %f and height %f is %f\n",b,h,a);
}
int main()
{
float b,h,a;
input(&b,&h);
find_area(b,h,&a);
output(b,h,a);
return 0;
}

