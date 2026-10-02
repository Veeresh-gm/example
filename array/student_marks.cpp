#include<iostream>
using namespace std;
int main()
{
    int marks[6];
    for(int i=0;i<6;i++)
    {
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> marks[i];
    }
    for(int i=0;i<=5;i++)
    {
        if(marks[i] >= 35)
        {
            cout << "Student " << i+1 << " has passed." << endl;
        }
        else
        {
            cout << "Student " << i+1 << " has failed." << endl;
        }
        
        
    }
}
//ctrl+/ comments the selected lines of code
