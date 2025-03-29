#include<stdio.h>
int main()
{
    int array1[10], array2[10], i, n ;

    printf("Enter your number- ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &array1[i]);
    }
    printf("\nArray1= ", array1[i]);
    for(i=0; i<n; i++){
        printf("%d", array1[i]);
    }
    for(i=0; i<n; i++){
        array2[i] = array1[i];
    }
    printf("\nArray2= ");
    for(i=0; i<n; i++){
        printf("%d", array2[i]);
    }



    return 0;
}
