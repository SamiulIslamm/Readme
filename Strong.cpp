#include<iostream>
using namespace std;
int main(){
    int n,i,fact,sum =0,rem,temp;

    cout<<"Enter the number :\n";
    cin>>n;
    temp = n;
    while(temp!=0){
        rem = temp %10;
        fact = 1;
        for(i = 1; i<=rem; i++){
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp /10;
    }

    if(sum==n){
        cout<<sum <<"is a Strong number \n";
    }else{
        cout<<"Not Strong number :\n";
    }
   // cout<<"sum of digits is = "<<sum ;
}