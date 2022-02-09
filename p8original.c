/* Write a program to find the triangle with smallest area in n given triangles.
struct _triangle
{
float base,altitude,area;
};
typedef _triangle Triangle
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, triangle t[n]);
void find_area(Triangle *t);
void find_areas_n(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);

void output(int n, Triangle t[n], Triangle smallest);
void
input:
2 3
4 6
the smallest of triangles with base and height
2,3 and
4,6
is
triangle with base 2.000000, 3.000000 is 3.000000
The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000*/
#include <stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter the n value \n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf ("Enter base and altitude of triangle \n");
  scanf ("%f%f", &t.base, &t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for (i=0;i<n;i++)
    t[i]=input_triangle();
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
  find_area(&t[i]);
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  int i;
  Triangle Smallest;
  Smallest.area = t[0].area;
  for(i=0; i<n; i++)
    if(Smallest.area >=t[i].area)
    {
        Smallest.area=t[i].area;
        Smallest.base=t[i].base;
        Smallest.altitude=t[i].altitude;
        
    }    
    return Smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    int i;
    for (i=0;i<n;i++)
    printf("Triangle with base and altitude %f,%f of area is of %f \n",t[i].base,t[i].altitude,t[i].area);
    printf("The smallest triangle is the triangle with %f base and %f altitude \n",smallest.base,smallest.altitude);
}
int main()
{
    int n ;
    n= input_n();
    Triangle t[n],smallest;
    input_n_triangles(n,t);
    find_areas_n(n,t);
    smallest=find_smallest_triangle(n,t);
    output(n,t, smallest);
return 0;
}