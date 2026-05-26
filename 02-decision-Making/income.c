#include<stdio.h>
int main(){
    int income;
    float tax;
    printf("enter your income");
    scanf("%d",&income);
    if(income>250000 && income<=500000){
    tax=(income-250000)*0.05;
    printf("your payable tax is %.2f\n",tax);
}
    else if(income>500000 && income<=100000){
    tax=12500+(income-500000)*0.2;
    printf("your payable tax is %.2f\n",tax);
}
    else if(income>1000000){
    tax=112500+(income-1000000)*0.3;
    printf("your payable tax is %.2f \n",tax);
}
    else{
        printf("no tax");
    }
}