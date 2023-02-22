#include<iostream>
#include<conio.h>
using namespace std;


class Student{
    public:
    string Roll;
    string std_name;
    string college_name;
    float perc;
    char choices;


    int input_sections(){
        cout<<"Hey are you Roobt? press Yes(Y/y) or No(N/n)"<<endl;
        cout<<"Enter you choice : \n";
        cin>>choices;
        if(choices=='Y' || choices=='y'){

            cout<<"Student Roll no.:\n";
            getline(cin,Roll);
            cout<<"Enter the name of Student :\n";
            getline(cin,std_name);
            cout<<"Enter college name:\n";
            getline(cin,college_name);
            cout<<"Enter percentage :\n";
            cin>>perc;

        }else if(choices == 'N' || choices=='n'){

           
            return 0;
        }

        // return 0;
    }

    void display(){
        cout<<"Roll is = "<<Roll <<endl;
        cout<<"Student is = "<<std_name <<endl;
        cout<<"Student is = "<<college_name <<endl;
        cout<<"Percentge is = "<<perc <<endl;
    }

};

int main(){
    Student samiul;

    samiul.input_sections();

    samiul.display();
}