#include<stdio.h>
int main(){
    int number,i;
    // circle of iteration untill its end point match 
    // when we want sometime to do repeat of work 
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("pranita\n");
    // printf("enter number\n");
    // scanf("%d",&i);

    // for( intitalization      ;    condition  ;    inc/dec)
    //     start point          ;    end point  ;    inc dec
        // intitial    number<=10; number+1 
    for(number = 1 ;  number<=10 ; number++ )  //2 3 ......10,11
    { //2 4 6 8 10 12 14 16 18 20
        // printf("%d \n",number*2);  
        for(int i=0;i<=10;i++) {
            printf("%d\n", number*i);
        }
        printf("\t");
    }
    printf("excution completed");
}
// gnome terminal