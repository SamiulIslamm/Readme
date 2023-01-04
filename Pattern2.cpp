#include<iostream>
using namespace std;
int main()
{
   int row,col,i,j,n;

   cout<<"Enter the row value :\n";
   cin>>n; 

   for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
        cout<<row <<" ";
    }
    cout<<endl;
   }

   for(row=n-1; row>=1; row--){
    for(col=1; col<=row; col++){
        cout<<row <<" ";
    }
    cout<<endl;
   }
} // namespace std;
