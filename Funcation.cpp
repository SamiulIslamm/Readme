#include<iostream>
using namespace std;

class func{

    private:
    string name;

    public:
    // void display(){
    //     cout<<"Name is = "<<name;
    // }

    void set_value(string x){
        name = x;
    }

    string get_value(){
        return name;
    }

};




int main(){
    func sa;

    sa.set_value("Samiul islam");
    cout<<sa.get_value();

   // sa.display();
}