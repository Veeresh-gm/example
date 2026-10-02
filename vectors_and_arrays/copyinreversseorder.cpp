#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2;
    for(int j=v.size()-1;j>=0;j--)
    {
        v2.push_back(v[j]);
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}    