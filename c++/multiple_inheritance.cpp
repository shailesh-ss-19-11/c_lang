// accessing the property of parent class to child class 

#include<iostream>
using namespace std;

class Base1{
    public:
        float salary = 10000;
};

class Base2{
    public:
    float bonus = 1000;
};

class Derive : public Base1 , public Base2
{
    public:
    int sum(){
        cout<<"total salary is :"<<salary+bonus;
    }
};
int main(){
    Derive emp1;
    cout<< "your salary is :"<< emp1.salary<<endl;
    cout<< "your Bonus is :"<< emp1.bonus<<endl;
    emp1.sum();
}