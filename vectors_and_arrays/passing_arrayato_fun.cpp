#include<iostream>
using namespace std;
void display(int arr[]) //OR void display(int a[])
{
    for(int i=0;i<=5-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int b[])
{
    b[0] = 10; // Modify the first element
}
int main() 
{
    int arr[5]={1,2,3,5,6};
    display(arr);
    change(arr);
    display(arr);
    return 0;
}