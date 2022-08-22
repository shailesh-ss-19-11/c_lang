


// *********      i=row, j==col
// *       *
// *       *
// *       *
// *       *
// *       *
// *       *
// *       *
// *********

#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number of rows :");   
    scanf("%d",&n);                         //n=5

    for(i=1;i<=n;i++){    //i=1,2,3         
   
        for(j=1;j<=n;j++){     //j=1,2,3,4,5,6

            if(i==1||i==n||j==1||j==n)  //true, false
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

// * * * * *
// *       *
// *       *