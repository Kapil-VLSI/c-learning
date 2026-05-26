#include<stdio.h>
int main()
{
    int p,t;
    float r;
    printf("enter the principal amount  \n");
    scanf("%d",&p);
    printf("enter the time \n");
    scanf("%d",&t);
    printf("enter the rate of interest \n ");
    scanf("%f",&r);
    float SI = (p*r*t)/100;
    printf("the simple interest is %f",SI);
    return 0;
}