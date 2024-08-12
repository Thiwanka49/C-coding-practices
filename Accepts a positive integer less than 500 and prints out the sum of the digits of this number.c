#include <stdio.h>
  int main() 
  {
    int a, x = 0, y;
    printf("Input a positive number less than 500: \n");
    scanf("%d", & a);
    y = a;
    if (y < 1 || y > 999) 
    {
      printf("The given number is out of range\n");
    } 
    else 
    {
      x += y % 10;
      y /= 10;
      x += y % 10;
      y /= 10;
      x += y % 10;
      printf("Sum of the digits of %d is %d\n", a, x);
    }
    return 0;
  }