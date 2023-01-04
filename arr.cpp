#include<iostream>
using namespace  std;
int main()
{
    int n,i,j,row0,col0,row1,col1;
    cout<<"Enter the Value of Row for A:\n";
    cin>>row0;

    cout<<"Enter the value of Col for A :\n";
    cin>>col0;

    int A[row0][col0],sum[10][10];
    cout<<"Now enter the element:\n";
    for(i=0; i<row0; i++){
        for(j=0; j<col0; j++){
            cout<<"A["<<i <<"]"<<"["<<j <<"]";
            cin>>A[i][j];
        }
        cout<<"\n";
    }

 cout<<endl;

    cout<<"Enter the Value of Row for B:\n";
    cin>>row1;

    cout<<"Enter the value of Col for B :\n";
    cin>>col1;

    int B[row1][col1];
    cout<<"Now enter the element:\n";
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            cout<<"B["<<i <<"]"<<"["<<j <<"]";
            cin>>B[i][j];
        }
        cout<<"\n";
    }
 cout<<endl;
cout<<"Print Elements of A:\n";

for(i=0; i<row0; i++){
    for(j=0; j<col0; j++){
        cout<<" "<<A[i][j];
    }
    cout<<endl;
}
 cout<<endl;
cout<<"Print Elements of B:\n";

for(i=0; i<row1; i++){
    for(j=0; j<col1; j++){
        cout<<" "<<B[i][j];
    }
    cout<<endl;
}


for(i=0; i<row0; i++){
    for(j=0; j<row1; j++){
         sum[i][j] = A[i][j] + B[i][j];
    }
}

cout<<endl;
cout<<"Print Addition Elements of A+B:\n";

for(i=0; i<row0; i++){
    for(j=0; j<row1; j++){
        cout<<" "<<sum[i][j];
    }
    cout<<endl;
}
    
} // namespace  std;
// int main()
