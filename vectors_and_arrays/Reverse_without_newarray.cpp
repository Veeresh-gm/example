#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap(vector<int> &v,int i,int j)
{
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
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
    display(v);
    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        swap(v,i,j);
        i++;
        j--;
    }
    display(v);
}