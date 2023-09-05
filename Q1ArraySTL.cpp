/*Using STL Array gets and sets a reference to an element based on a given index.*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a = {1,2,3,4,5};
    // Here we use array indexing operator '[]' to achive the same result
    int &Ref = a[2];
    a[2] = 10;
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    return 0;

}