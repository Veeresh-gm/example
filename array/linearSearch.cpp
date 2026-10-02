#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched:";  
    cin>>key;
    bool found=false;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            cout<<"Key found at index "<<i<<endl;
            break;
        }
    }
    if(!found)
    {
        cout<<"Key not found"<<endl;
    }
}