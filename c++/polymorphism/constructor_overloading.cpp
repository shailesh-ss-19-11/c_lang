#include<iostream>
using namespace std;
class Sample{
    public:

    int i,j;

    Sample(int a,int b){
        i=a;
        j=b;
        cout<<"addition is :"<<i+j<<endl;
    }

    Sample(int a, int b,int c){
        cout<<"addition is :" <<a+b+c<<endl;
    }
};
int main(){
    Sample s1(5,6), s1(5,6,10);
    
}