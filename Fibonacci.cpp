#include<iostream>
using namespace std;
int main(){
    int n,i,first = 0, second = 1,count = 0,fibo=0;

    cout<<"Enter the number :\n";
    cin>>n;
    while (count<n)
    {
       if(count<=1){
            fibo = count;
        }else{
            fibo = first + second;
            first = second;
            second = fibo;
        }

        cout<<fibo <<" ";\
        count++;
    }
    
    

    return 0;
}