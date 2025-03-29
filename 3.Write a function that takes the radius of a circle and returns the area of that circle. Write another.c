#include<stdio.h>

float areaofcircle(float radius)
{
    return 3.1416 * radius * radius ;
}
float greaterornot(float area)
{
    if(area > 25){
    printf("\nArea greater than 25\n");
    } else{
    printf("\nArea smaller than 25\n");}
}

int main()
{
    float radius;
    printf("\nEnter your radius- ");
    scanf("%f", &radius);

    float area = areaofcircle(radius);
    printf("\nArea of circle with %.2f radius is: %.2f\n", radius, area);

    greaterornot(area);
}
