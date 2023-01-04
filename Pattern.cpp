#include<iostream>
using namespace std;

int main(){
    int n,row,col,i,j;

    cout<<"Enter the Row value :\n";
    cin>>n;
    //cout<<" ";

    // cout<<"Enter the Col value :\n";
    // cin>>col;

    for(row=n; row>=1; row--){
        for(col = row; col>=1; col--){
            cout<<(char (col-32)) <<" ";
        }
        cout<<endl;
    }
}