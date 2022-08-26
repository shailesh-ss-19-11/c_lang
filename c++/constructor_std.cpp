#include<iostream>
using namespace std;

class student{
    int rollNo ;
    char name[10];
    float fees;

    public:
        student(){
            cout<<"enter the roll number ";
            cin >>rollNo;
            cout<< "enter name";
            cin>>name;
            cout<<"enter fees ";
            cin>>fees;
        }
        void display(){
            cout<< rollNo <<"\t" <<name <<"\t"<<fees ;
        }
};
int main(){
    student s1;
    s1.display();
}