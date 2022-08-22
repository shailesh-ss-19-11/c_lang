
// i=0;

// while(condition){
    // ---------------------- 
    // ---------------------- 

    // ---------------------- 

    // inc/ dec 

// }

#include<stdio.h>
int main(){
    int i=1,number,count=0;  //user input 10

    printf("enter number :");
    scanf("%d",&number);  //5----- 1+2+3+4+5 1000
    while(i<number){
        count=count+i;
        i++;
    }
    printf("%d\n",count);
}

// 10 20 30 gretest number is
