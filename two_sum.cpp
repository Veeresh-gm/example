#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cout<<"Enter the target sum: ";
    cin>>x;
    for(int i=0;i<=v.size()-2;i++)
    {
        for(int j=i+1;j<=v.size()-1;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<i<<" "<<j<<endl;
            }
        }   
    }
}