#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}