#include<iostream>
using namespace std;

void swap(int A[],int B[]){
    int i,j,temp;
    temp = A[i];
    A[i] = B[j];
    B[j] = temp;
}
int Partitions(int A[], int low, int  high){
    int pivot = A[high];
    int i = (low-1);


    for(int j = low; j<=high-1; j++){
        if(A[j]<pivot){
            swap(A[i],A[j]);
        }
    }

    swap(A[i+1],A[high]);
    return (i+1);
}

void quick_sort(int A[],int low, int high){
    if(low<high){
        int pi = Partitions(A,low,high);

    quick_sort(A,low,pi-1);
    quick_sort(A,pi+1,high);
    }
    

}


void print(int A[],int Size){
    int i;

    cout<<"Print the element :\n";
    for(i=0; i<Size; i++){
        cout<<" "<<A[i];

    }
}



int main(){
    int n, i,j;

    cout<<"Enter the number of N:\n";
    cin>>n;

    int A[n];

    cout<<"Now enter the array element:\n";
    for(i=0; i<n; i++){
        cin>>A[i];
    }

    print(A, n);


}