#include<stdio.h>
int main(int argc, char const *argv[])
{
    int maths, physics ,chemistry; 
    printf("enter the marks of maths\n");
    scanf("%d", &maths);
    printf("enter the marks of physics\n");
    scanf("%d",&physics);
    printf("enter the marks of chemistry\n");
scanf("%d",&chemistry);
float total_percentage= (maths+physics+chemistry)/300.0*100;
if(maths>=33 && physics>=33 && chemistry>=33 && total_percectage>=40){
    printf("student is pass");
}
    else{
        printf("student is fail");

    }

    return 0;
}
