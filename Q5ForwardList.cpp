/*Write a c++ code, to demonstrate the forward list.*/
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1;
    forward_list<int> l2 = {7,8,9};
    forward_list<int>::iterator x ;
    l1.assign({2,3,4,5,6});
    x = l1.before_begin();// Returns iterator before the first element of the list
    l1.insert_after(x,{0,1});
    for(x = l1.begin();x !=l1.end() ; x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    l1.pop_front();
    l1.remove(5);
    l1.push_front(5);   //push_front fuction override the elemnet of first place
    l1.emplace_front(0); // it dose't override the content it create seprate memory block;
    l1.sort();
    //l2.splice_after(l2.before_begin(),l1); //it also merge two list from specified location
    l1.merge(l2);   //it merge the list in same order that they have;
    for(x = l1.begin();x !=l1.end() ; x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}