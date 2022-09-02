#include<iostream>
using namespace std;
class world{
    public:
    world(){
        cout<<"You are in the World of humans :"<<endl;
    }
};

class continents : public world{
    public:
    continents(){
        cout<<"You are in the ASIA continent :"<<endl;
    }
};

class country {
    public:
    country(){
        cout<<"you are in Country :"<<endl;
    }
};

class India: public country, public continents, public world{
    public:
    India(){
        cout<<"This is india :"<<endl;
    }
};

int main(){
    India ind;
}