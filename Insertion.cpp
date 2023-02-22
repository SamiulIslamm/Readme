#include<iostream>
using namespace std;


int main(){
    int n,i,whole,value;

    cout<<"Enter the array:\n";
    cin>>n;

    int A[n];

    cout<<"Enter the number :\n";
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    for(i=0; i<n; i++){
        value = A[i];
        whole = i;


        while(whole>0 && A[whole-1] > value){
        A[whole] = A[whole-1];
        whole--;
    }
    A[whole] = value;


    }

    cout<<"After the sotring :\n";
    for(i=0; i<n; i++){
        cout<<A[i];
    }

    return 0;
   
}