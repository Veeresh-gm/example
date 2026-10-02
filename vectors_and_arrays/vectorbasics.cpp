#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//no need to specify size
    //              size capacity
    v.push_back(6);// 1  1
    v.push_back(6);// 2  2
    v.push_back(6);// 3  4
    v.push_back(6);// 4  4
    v.push_back(6);// 5  8  
}
