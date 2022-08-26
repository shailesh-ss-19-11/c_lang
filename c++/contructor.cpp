// special member function which initialize object 
// function name and class name are same  

// types of contructor 
// default constructor 
// parametrized constructor
// copy constructor

#include<iostream>
using namespace std;

class construct{
    public: 
    int a, b;

    construct(){
        cout<<"hello constructor \n";
        a=10;
        b=20;
    }
    int display(){
        cout<<"display "<<endl ;
    }
};

int main(){
    construct c;
    c.display();
    cout<< "a :"<<c.a <<endl<<"b :"<< c.b;
}

