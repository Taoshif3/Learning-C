#include<stdio.h>

int main ()
{

    int a[3][3], b[3][3], i,j, flag=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

        printf("Enter your number for matrix 1- ");
           scanf("%d", &a[i][j]);}

    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter your number  for matrix 2- ");
            scanf("%d", &b[i][j]);


        }
    }

    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
           {
               if(a[i][j]!=b[i][j])
                flag=1;}

                if(flag==0){
                    printf("\na and b are euqal\n");}

            else
                printf("\nNot equal\n");


    return 0;
}
