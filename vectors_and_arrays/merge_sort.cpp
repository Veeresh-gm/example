#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int>& arr1,vector<int>& arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    vector<int> arr3(n+m);
    int i=0,j=0,k=0;
    while(i<=n-1 && j<=m-1)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++,k++;

        }
        else
        {
            arr3[k]=arr2[j];
            j++,k++;
        }
    }
    if(i==n)
    {
        while(j<=m-1)
        {
            arr3[k]=arr2[j];
            j++,k++;
        }
    }
    else if(j==m)
    {
        while(i<=n-1)
        {
            arr3[k]=arr1[i];
            i++,k++;
        }
    }
    return arr3;
} 
int main()
{
    vector<int> arr1(4);
    vector<int> arr2(6);
    arr1[0]=1;
    arr1[1]=3;
    arr1[2]=5;
    arr1[3]=7;
    arr2[0]=2;
    arr2[1]=4;
    arr2[2]=6;
    arr2[3]=8;
    arr2[4]=10;
    arr2[5]=12;

    vector<int> v=mergesort(arr1,arr2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}