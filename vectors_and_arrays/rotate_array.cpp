#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i,int j,vector<int>&a)
{
    while(i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int q=v.size();
    int k;
    display(v);
    cout<<"Enter the k value:";
    cin>>k;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}