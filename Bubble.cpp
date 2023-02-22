#include<iostream>
using namespace std;

int swap(int A[],int i,int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
    
}

    void display(int A[],int size){
        int i;
        cout<<"Print the output :\n";
        for(i=0; i<size; i++){
            cout<<A[i];
        }
    }
int main()
{
    int n,i,j,counter=0;
    
    cout<<"Enter the number of Array index:\n";
    cin>>n;

    int A[n];
    cout<<"Now enter the output: \n";
    for(i=0; i<n; i++){
        cin>>A[i];
    }

    for(i=0; i<n; i++){
        int count = 0;
        for(j=0; j<n-1-i; j++){
             counter++;
            if(A[j+1]<A[j]){
                swap(A,j+1,j);
                count=1;
            }

           
        }

         if(count==0){
              //  return -1;
             //   cout<<"total is"<<count<<"\n";
             break;
            }

    }

    display(A,n);
}