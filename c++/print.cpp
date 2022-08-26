#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    
    int age=20;

    void printmyname(){
        std::cout << "my name is shailesh and age is :" << age;
    }
};

int main(){
    A a1;
    printf("age is %d ", a1.age);
    a1.printmyname();
}