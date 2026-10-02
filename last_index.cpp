#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(10);
    v.push_back(3);
    v.push_back(4);
    v.push_back(10);
    v.push_back(6);
    v.push_back(11);
    int x=10;
    int LD=-1;
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==x)
    //     {
    //         LD=i;
    //     }
        
    // }
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x)
        {
            LD=i;
            break;
        }
    }
    cout<<LD<<endl;
}