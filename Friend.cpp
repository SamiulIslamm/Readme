#include<iostream>
using namespace std;

class A{
    private:
    int id = 12;
    string name = "Samiul Islam";

    public:
    friend class B;
};

class B{
    public:
    void display(A ob){
        cout<<"Id is = "<<ob.id <<"\n";
        cout<<"Name is = "<<ob.name;
    }
};

int main(){
    A Sam;
    B samiul;

    samiul.display(Sam);

}