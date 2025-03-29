#include <stdio.h>

int increasebyone(int *ptr){
    (*ptr)++;
}

int main()
{
    int number = 6;

    int *ptrnumber = &number ;


    increasebyone(ptrnumber);

    printf(" %d", *ptrnumber);
}
