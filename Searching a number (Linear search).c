#include<stdio.h>
int main()
{
    int array1[]= { 1,2,3,4,5,6,7,8,9,};
    int value, pos= -1, i;

    printf("Enter your value= ");
    scanf("%d", &value);

    for(i=0; i<9; i++){
        if(value==array1[i]){
            pos = i + 1;
            break;
        }
    }
    if(pos== -1){
        printf("The value is not found");
    }
    else
        printf("The value is found at %d position", pos);

    return 0;
}
