#include<iostream>
using namespace std;

class Mobile{
    public:
    virtual void send_sms() = 0;

};

class Samiul : public Mobile{
    public:
    void send_sms(){
        cout<<"Hello Samiul "<<endl;
    }
    
};

int main(){
    Mobile *m;

    Samiul sam;

    m = &sam;
    m->send_sms();
}