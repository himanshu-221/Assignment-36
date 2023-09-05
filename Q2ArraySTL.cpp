/*Using STL Array returns the total number of elements in the array*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> a = {1,2,3,4,5,6};
    int count;
    count = a.max_size();
    cout<<"total number of elements in the array = "<<count<<endl;
    return 0;
}