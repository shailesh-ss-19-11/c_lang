// pre define -----printf("sdfkjsdhfkjhds") scanf("%d",&)
// user define-----calculator printhello() printanything()
// we cant use same name which is already predefined

// function is the small part of code or small set of instruction 
// its a parts of programs 

// everytime function return some value but we need to specify there return type

// if want to execute function we need to call it everytime
// there is no limit to call function 

// if we want return value in integer that time we use int return type 
// if we dont want any return type that time we use void 

// void means doesn't return anything
// function is use for prevent repeatation of code

// syntax 

// return type function_name (){

// }





#include<stdio.h>
void printname();

void printname(){        // function defination
    printf("prachi \n");
}
int main(){
    printf("hi ");
    printname();    //function call with parameter
}


