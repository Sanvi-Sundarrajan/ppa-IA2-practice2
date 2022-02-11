/*Write a program to reverse a string.
void input_string(char a);
int str_reverse(char a);
void output(char a,char reversea);
input:
hello
output:
olleh*/
#include <stdio.h>
void input_string (char *str)
{
  printf (" Enter the string \n");
  scanf ("%s", str);
}
int length (char *str)
{
  int count = 0;
  while (str[count] != 0)
    count++;
  return count;
}
void revstr (char *str1)
{
  int i, len, temp;
  len = length (str1);
  for (i = 0; i < len / 2; i++)
    {
      temp = str1[i];
      str1[i] = str1[len-1 - i ];
      str1[len-1 - i ] = temp;
    }
}
void output (char *str1)
{
  printf (" After reversing the string: %s\n", str1);
}
int main ()
{
  char str[50];
  input_string (str);
  revstr (str);
  output (str);
  return 0;
}
