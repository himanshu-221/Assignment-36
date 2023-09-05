/*Declare a vector without initialization, insert some elements and print*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    vector<int>:: iterator i;
    v.push_back(1);
    v.push_back(2);
    v.insert(v.begin(),-1);
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }
    for(i=v.begin(); i != v.end() ; i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}