#include<iostream>
using namespace std;
int main()
{
    int n,fibo;
    cout<<"Enter the number :\n";
    cin>>n;

    int A[n];

    A[0] = 0;
    A[1] = 1;

    for(int i= 2 ; i<n; i++){
        A[i] = A[i-1] + A[i-2];
    }
    for(int i =0; i<n; i++){
        cout<<" "<<A[i];
    }
   // cout<<fibo;
    

} // namespace std;
