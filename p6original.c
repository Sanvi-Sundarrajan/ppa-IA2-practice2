/*Write a program to reverse a string.
void input_string(char a);
int str_reverse(char a);
void output(char a,char reversea);
input:
hello
output:
olleh*/
#include <stdio.h>
void input_string(char *a)
{
  printf("Enter the string \n");
  scanf("%s",a);
}
int length(char *a)
{
  int count =0;
  while(a[count]!=0)
    count++;
  return count;
}
void str_reverse(char *a)
{ 
    char reversea;
    int i,j;
    j = length(a) - 1;
    while (i < j)
    {
      reversea = a[i];
      a[i] = a[j];
      a[j] = reversea;
      i++;
      j--;
   }
   
}
void output(char *a,char *reversea)
{
  printf("The reversed string is %s",a);
}
int main()
{
char a[100],reversea;
input_string(a);
str_reverse(a);
output(a,reversea);
return 0;
}