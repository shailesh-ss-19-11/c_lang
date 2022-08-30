#include<iostream>
using namespace std;

class Sample {

    private :
    int x,y;

    public:
    Sample(int a, int  b){
         x = a;
         y = b;
    }

    Sample(const Sample& s1){
        x = s1.x;
        y = s1.y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};


int main(){
    Sample s1(10,25);
    Sample s2=s1;

    cout<<"s1 of x  : "<<s1.getx();
    cout<<"s1 of x  : "<<s2.getx();

}