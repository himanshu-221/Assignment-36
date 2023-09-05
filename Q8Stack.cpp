/*Create a stack of int type, push 5 elements in it and print it on the console screen.
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
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}