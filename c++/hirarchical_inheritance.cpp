// 1 parent class  number of child classes 
#include<iostream>
using namespace std;
class Comapny{
    public:
    char company[10] = "TOYOTA";
    void display(){
        cout<<"cars are available to see visit us in TOYOTA "<<endl;
    }
};

class branch_one:public Comapny{
    public:
    char car_name[20]="fortuner";
    int price = 1000000;
    int milage =10;
    void display_specs(){
        cout<<"car name is "<<car_name<<endl;
        cout<<"car price is "<<price<<endl;
        cout<<"car milage is "<<milage<<endl;
    }
};

class branch_two:public Comapny{
    public:
    char car_name[20]="innova";
    int price = 1000000;
    int milage =10;
    void display_specs(){
        cout<<"car name is "<<car_name<<endl;
        cout<<"car price is "<<price<<endl;
        cout<<"car milage is "<<milage<<endl;
    }
};

int main(){
    branch_one c1;
    branch_two c2;
    c1.display();
    cout<<"the company of car is :"<<c2.company<<endl;
    c1.display_specs();
    c2.display_specs();
}



// bank 
// bank name SBI 
// vaishali nagar branch  ----- branch daily budget ==10crore  --- employees ----timming ----account holders 
// kamal square branch    ----- branch daily budget ==10crore  --- employees ----timming ----account holders 
// saoner branch          ----- branch daily budget ==10crore  --- employees ----timming ----account holders
