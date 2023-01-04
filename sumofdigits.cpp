#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem,temp;

    cout<<"Enter the number :\n";
    cin>>n;
    temp = n;
    while (temp!=0)
    {
        /* code */
        rem = temp % 10;
     sum = sum + rem;
     temp = temp /10;
    }
    
     

     cout<<"Sum digits is  = "<<sum <<"\n";
     return 0;

} // namespace std;
