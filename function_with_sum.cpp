#include<stdio.h>
int sum(int,int);

int main(){
    int num1,num2;
    printf("enter two values :");
    scanf("%d%d",&num1,&num2);

    sum(num1,num2);  // arguments
}

int sum(int i,int j){  //parameters
    printf("%d\n",i+j);
    printf("%d\n",i-j);
    printf("%d\n",i/j);
    printf("%d\n",i*j);
}