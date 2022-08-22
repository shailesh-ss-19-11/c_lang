    // bank system  3000 ---> panelty --> 500 ---> msg --->to user
#include<stdio.h>

int main(){
    float amount, atm_charges=111,panelty=500, max_amount=500000;

    printf("enter amount of customer :");

    scanf("%f",&amount);

    if(amount>=3000 && amount<=50000){
        printf("your have JAN DHAN Account and your account is safe will not deduct:");
        amount=amount-atm_charges;
        printf("your atm charges are deducted now your account balance is %f",amount);
    }
    else if(amount<3000){
        amount= amount-panelty;
        printf("your account balance is deducted becouse of panalty ");
        printf("your amount is %f",amount);

    }
    else if(amount>=max_amount){
        printf("please pay your tax on time we will deducted on the basis of rule of GOV ");
        amount= (amount*5)/100;
        printf("now your amount is %f",amount);
    }
    else{
        printf("your amount %f",amount);
    }
}