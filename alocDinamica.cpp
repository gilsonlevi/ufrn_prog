#include <iostream>
using namespace std;

int main()
{
    
    int * ptr;

    ptr = new int;
    
    cout << &ptr << "\n";
    
    *ptr = 2;
    
    cout << *ptr;
    
    
    

    return 0;
}