#include<stdio.h>
int main()
{
    int a[10], ave=0, sum=0, i, n;

    printf("Enter your number= ");
    scanf("%d", &n);

   for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


     for(i=0; i<n; i++){
        sum= sum + a[i];
     }
    printf("%d", sum);
    printf("\nAverage= %.2f", (float)sum/n);

    return 0;
}
