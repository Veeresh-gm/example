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
    cout<<"Enter the size of the vector:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    // int num0=0,num1=0;
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==0)
    //     {
    //         num0++;
    //     }
    //     else if(v[i]==1)
    //     {
    //         num1++;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(i<num0)
    //     {
    //         v[i]=0;
    //     }
    //     else
    //     {
    //         v[i]=1;
    //     }

    // }
    // display(v);

//method 2
int i=0,j=n-1;
while(i<j)
{
    if(v[j]==1) j--;
    if(v[i]==0) i++;
    if(i>j) break;
    if(v[i]==1 && v[j]==0)
    {
        swap(v,i,j);
        i++;
        j--;
    }
}
display(v);
}

     