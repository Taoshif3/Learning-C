#include <stdio.h>

int main()
{
    int a = 5, b = 5, sum = 0;

    int *ptr1, *ptr2 ;

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2 ;
    printf("sum = %d", sum);
}
