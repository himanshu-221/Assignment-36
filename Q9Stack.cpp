/*Create a stack of int type, and find the top most element in a stack.
*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(2);
    s.push(4);
    auto x = s.top();
    cout<<x<<endl;
    return 0;
}