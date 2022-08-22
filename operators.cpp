#include<stdio.h>

int main(){
    // operators -- operator is special symbol that perform operation 
    // operators perform between two or more operands also it can be create expression 

    // arithmatic operator  --- + , - , *, /, % --- 
    // logical operators ------ && , || , !
    // conditional operators, relational operators---- <, >, <= ,>=, == ,!=
    // ternary operators ----- expression ? if true (expression) :if false (expression) 
    // assignment operators --- = , += , -=, ++, -- 
    // bitwise operators --- & | !  

    int i=10, j=10;

// Arithmatic Operators 
    // printf("%d\n",i+j);
    // printf("%d\n",i-j);
    // printf("%d\n",i*j);
    // printf("%d\n",i/j);
    // printf("%d\n",i%j);

    // And 

    // true && true = true
    // false && true = false
    // true && false = false
    // false && false = false

    // // OR 

    // false || false = false
    // true && true = true
    // false && true = true
    // true && false = true

    // // NOT 

    // inverse the operation 

    // true - false 

                // false     true
    // printf("%d",!(i-j==0 && i-j == 0) || (i*j==0 && i/j == 0));

    // printf("%d\n",i+j==20 && i-j==0);  //1
    // printf("%d\n",i-j==20 || i+j==0);  //0
    // printf("%d\n",!i==10);             //0
    // 0 ----->false, off, no 
    // 1 ----->true , On , yes

    printf("%d\n",i<j);  //false-0
    printf("%d\n",i>j);  //false-0
    printf("%d\n",i<=j); //true-1
    printf("%d\n",i>=j); //true-1
    printf("%d\n",i==j); //true-1
    printf("%d\n",i!=j); //false-0


}