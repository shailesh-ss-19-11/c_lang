#include<stdio.h>
int square();
int reactangle();
int main(){
    int area,rect;
    area = square();
    printf("%d",area);
    printf("%d",reactangle());
    return 1;
}
int square(){    // 
    return 20*20; //400
}

int reactangle(){
    return 20*40;
}