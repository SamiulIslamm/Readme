// Transpose_Matrix
#include<iostream>
using namespace std;
int main()
{
    int A[10][10], B[10][10],i,j,Row,Col;

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

    cout<<"Tronspose Matrix Values :\n";
    cout<<"----------------\n";

     for( j = 0; j < Col; j++){
        for (i=0; i<Row; i++)
        {
            cout<<" "<<A[ i ][ j ];
           // cin>>A[i][j];
        }
        cout<<"\n";
        
    }
    

}
