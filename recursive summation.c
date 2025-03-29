#include <stdio.h>

int recursive(int n)
{
    if(n==0){
        return 1;
    } else
    return n + recursive(n - 1);
}

int main()
{
    int n;

    printf("Enter your number- ");
    scanf("%d", &n);

    int calculate = recursive(n);

    printf("Thus the summation is- %d", calculate - 1 );

    return 0;
}
