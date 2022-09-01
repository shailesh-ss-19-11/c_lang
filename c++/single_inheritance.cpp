// accessing the property of parent class to child class 

#include<iostream>
using namespace std;

class Base{
    public:
        float salary = 10000;
};

class Derived : public Base{
    public:
    float bonus = 1000;
    int sum(){
        cout<<"your total salary is :"<< (salary+bonus)<< endl;
    }
};

int main(){
    Derived emp1;
    
    cout<< "your salary is :"<< emp1.salary<<endl;
    cout<< "your Bonus is :"<< emp1.bonus<<endl;
    emp1.sum();
}