// agar user ka naam rutika hai to 

// vo abroad 

// agar nahi hai to

// vo jaegi manali


// ex.

// if(age > 22){
//     // shadi krva do 
// } else{
//     // padhai krne do 
// }
#include<stdio.h>
int main(){
    int age=22;
    char user[20]="pranita";

    printf("%s",user);
    if((user=="pranita") &&( age==22)){
        printf("shadi krva do ");
    }
    else{
        printf("sapno ko pura karo");
    }
}