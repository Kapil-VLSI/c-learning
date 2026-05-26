#include<stdio.h>
int main()
{
    float radius, height;
    printf("enter the radius of a circle \n");
    scanf("%f", & radius);
    printf("enter the height of a cylinder \n");
    scanf("%f" ,& height);
    float volume = 3.14*radius*radius*height;
    printf("volume of a cylinder is %f \n", volume);
    return 0;
}
