#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    float gpa;

    void display(){
        cout<<"ID is = "<<id <<"\n";
        cout<<"GPA is = "<<gpa <<"\n";
    }
    //Constructor
    Student(int id, float gpa){
        this->id = id;
        this->gpa = gpa;
    }

    // void setvalue(int x, float y){
    //     id = x;
    //     gpa = y;
    // }
};

int main()
{

    Student Samiul(12,45.78);
    
    
    Samiul.display();
    
} // namespace std;
