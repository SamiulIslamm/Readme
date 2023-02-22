#include<iostream>
using namespace std;

int main(){
    int i,j,min,n,temp;
    cout<<"Enter the number of Array:\n";
    cin>>n;

    int B[n];

    cout<<"Now enter the array element :\n";
    for(i=0; i<n; i++){
        cin>>B[i];
    }

    for(i=0; i<n; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(B[j]<B[min]){
               min = j;
            }
        }

        temp = B[i];
        B[i] = B[min];
        B[min]=temp;
    }


    cout<<"After Selection Sort :\n";
    for(i=0; i<n; i++){
        cout<<B[i];
    }

    return 0;
}