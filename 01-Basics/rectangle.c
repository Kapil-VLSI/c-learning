#include<stdio.h>
int main()
{
    int length, breadth;
    printf("enter the length of a rectangle ");
    scanf("%d",& length); 
    printf("enter the breadth of a  rectangle ");
    scanf("%d",& breadth);
    float area= length*breadth;
    printf("area of a rectangle is %f ",area);

    return 0;
}