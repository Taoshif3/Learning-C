#include <stdio.h>

int gcd( int a, int b)
{
    while(b!=0){
     int temp = b;
     b = a % b;
     a = temp;}
    return a;
}

int main()
{
  int a, b;

  printf("Enter 2values- ");
  scanf("%d %d", &a, &b);

  int result = gcd(a, b);
  printf("GCD of %d & %d is %d", a, b, result);

  return 0;

}

