#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"This a A class :\n";
    }
    void add(){
        int a,b,c;
        cout<<"Enter the value:\n";
        cin>>a;

        cout<<"Enter the second value:\n";
        cin>>b;

        c = a + b;

        cout<<"sum is = " <<c;
    }
};

class B : public A{

    void show(){
        cout<<"This is B class :\n";

        void display();
    void add();
    }

    

};

int main()
{

    B samiul;

    samiul.display();
    samiul.show();
    
} // namespace std;
