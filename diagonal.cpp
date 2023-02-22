#include<iostream>
using namespace std;
int main()
{
    int A[10][10], i,j,Row,Col,sum = 0;

    cout<<"Enter the number of Row :\n";
    cin>>Row;

    cout<<"Enter the number of Col :\n";
    cin>>Col;

    cout<<"Now enter the number :\n";

    for(i=0; i<Row; i++){
        for ( j = 0; j < Col; j++)
        {
            cout<<"A[" <<i <<"]" <<"[" <<j <<"]";
            cin>>A[i][j];
        }
        cout<<"\n";
        
    }

    cout<<"Print Values :\n";
    cout<<"----------------\n";

     for(i=0; i<Row; i++){
        for ( j = 0; j < Col; j++)
        {
            cout<<" "<<A[ i ][ j ];
           // cin>>A[i][j];
        }
        cout<<"\n";
     }


     for(i=0; i<Row; i++){
        for(j=0; j<Col; j++){
            if(i==j){
                sum = sum + A[i][j];
            }
        }
     }

     cout<<"Total sum is = " <<sum;
     return 0;
        
}