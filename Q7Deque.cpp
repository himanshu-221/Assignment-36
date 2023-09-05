/*Returns a reverse iterator which points to the last element of the deque (i.e., its reverse 
beginning).*/
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_front(5);
    d.push_back(15);
    d.push_back(20);
    //d[3] = 100;   both operators are overloaded inside the deque class;
    auto x = d.rbegin();//d.rend();
    
    cout<<*x<<endl;
    return 0;

}