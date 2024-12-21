//To find circumfernce and area of a circle
#include<stdio.h>
int main()
{
    const float PI=3.14;
    float radius,area,circumfernce;
    printf("Enter radius of the circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circumfernce=2*PI*radius;
    printf("\nArea=%f\nCircumfernce=%f",area,circumfernce);
    return 0;
}