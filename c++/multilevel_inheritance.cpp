#include<iostream>
using namespace std;
class Baseclass {
    public:
    int salary = 10000;
};

class Derived_one: public Baseclass{
    public:
    int bonus =1000;
};

class Derived_two: public Derived_one{
    public:
    int pf = 200;
    int total_salary(){
        cout<<"total salary is :"<<(salary+bonus)-pf << endl;
    }
};

int main(){
    Derived_two d1;
    cout<<"salary is  : "<<d1.salary<<endl;
    cout<<"bonus is  : "<<d1.bonus<<endl;
    cout<<"total salary is  : "<<d1.total_salary()<<endl;
}