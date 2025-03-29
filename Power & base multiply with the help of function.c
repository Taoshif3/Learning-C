#include <stdio.h>

int power(int a, int b)
{
     int result = 1;

     for(int i = 0; i < b; ++i){
        result *= a;
     }
     return result;
}

int main()
{
    int base;
    int power1;
    int result;

    printf("Enter your base and power- ");
    scanf("%d %d", &base, &power1);

    result = power(base, power1);
    printf("\n%d ^ %d = %d\n", base, power1, result);

    return 0;
}
