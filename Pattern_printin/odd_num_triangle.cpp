#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j+=2)
        {
           cout<<j;
        }
        cout<<endl;
    }

} 