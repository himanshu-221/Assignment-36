#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> l1 = {2,3,4,5};
    forward_list<int> :: iterator x;
    l1.emplace_front(1);
    x = l1.begin(); // it return the address of first location;
    cout<<"Address of first location "<<x._M_node<<endl;
    cout<<"element on first location "<<*x;
    return 0;
}