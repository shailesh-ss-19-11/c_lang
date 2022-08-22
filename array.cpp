// array collection of similar data types
//int 2bytes - 
// int mnumber=9595552923; //-127 to 128

// int i;

// int number[i];

// int number[]={10,20,30,40,50,60,70};

// array elements extract krne bolta hai to use for loop 

#include<stdio.h>
int main(){
    int number[10],i,length;
    printf("enter the elements of array :");
    for(i=0; i<10; i++){
        scanf("%d",&number[i]);
    }
    length  = sizeof(number)/sizeof(number[0]);  // int 4 bytes =28

    for(i=0; i<10 ;i++){
     printf("%d\n",number[i]); 
    }
}

// marks =  85,100,70,23,35,36

