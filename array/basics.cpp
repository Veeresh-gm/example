#include<iostream>
using namespace std;
int main()
{
    int arr[7]= {10, 20, 30, 40, 50, 60, 70};
    /*arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    */

    cout << "Elements of the array are: ";
    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}