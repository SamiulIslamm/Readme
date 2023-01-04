#include<iostream>
using namespace std;
int main(){
    int n,count=0;

    cout<<"Enter the number :\n";
    cin>>n;

    while (n!=0)
    {
        n=n/10;
        ++count;
        /* code */
    }
    cout<<"Total digits are: " <<count;
    return 0;
    
}