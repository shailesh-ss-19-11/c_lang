// implicit constructor 

#include<iostream>
using namespace std;

class Demo{
    int id;
    public:

    int get(int x ){
        id= x;
    }

    void display(){
        cout<<"ID is :"<<id ;
    }
};
int main(){
    Demo d1;

    Demo d2(d1); //copy constructor 
                   // or d2=d1
    d1.get(10);
    d1.display();

    d2.get(20);
    d2.display();
}