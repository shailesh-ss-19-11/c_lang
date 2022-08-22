#include<stdio.h>
int main(){
    // user define data type 
    // use to store the address of variable 
    // for access the variable we use * (astrisk) to store we use &( address)
    // sometimes we have need to access the varibale using its address 

    int i=20,j=90,k=500;  //actual variable diclaration
    int *ptr_i, *ptr_j, *ptr_k ; //pointer variable declaration

    ptr_i = &i; // storing the address of i
    ptr_j = &j;
    ptr_k = &k;


    printf("address of i is %x \n",&i);

    printf("stored address is %x\n",ptr_i);

    printf("stored address is %d\n",*ptr_i);

    printf("stored address j is %x\n",ptr_j);     //address of variable 

    printf("stored value of j is %d\n",*ptr_j);    //actual value

    printf("stored address k is %x\n",ptr_k);
    printf("stored value of k is %x\n",ptr_k);


    printf("stored address is %d\n",*ptr_k);


    

}