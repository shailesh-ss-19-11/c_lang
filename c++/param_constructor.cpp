#include <iostream>
using namespace std;

class Point
{
    private:
    int x, y;

public:
        // 10    20
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    int getx(){
        return x;
    }

    int gety(){
        return y;
    }

};

int main(){
    Point p1(10,20);

    cout<<"x = " << p1.getx()
        <<"\ny =" << p1.gety();
}



// two numbers addition using constructor user input