#include<iostream>
using namespace std;
class Sample{
    public:

    int i,j;

    int add(int a,int b){
        i=a;
        j=b;
        cout<<"addition is :"<<i+j<<endl;
    }

    int add(int a, int b,int c){
        cout<<"addition is :" <<a+b+c<<endl;
    }
    int display(){
        cout<<"display :";
    }
};
int main(){
    Sample s[20];
    int num;
    cout<<"enter the number :"<<endl;
     for ( num = 0; num < sizeof(s); num++)
     {
        s[num];                         //s[0], s[1], s[2]......s[20];
        s[num].display();
     }
     
     

    // s1.add(5,6);
    // s1.add(5,6,7);    
}


